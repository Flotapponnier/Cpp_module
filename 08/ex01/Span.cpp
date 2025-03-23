#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span(unsigned int limit) : size_limit(limit) {}

Span::Span(const Span& other) 
    : size_limit(other.size_limit), data_list(other.data_list) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        size_limit = other.size_limit;
        data_list = other.data_list;
    }
    return *this;
}

Span::~Span() {}

Span::Span(Span&& other) 
    : size_limit(other.size_limit), data_list(std::move(other.data_list)) {
    other.size_limit = 0;
}

Span& Span::operator=(Span&& other) {
    if (this != &other) {
        size_limit = other.size_limit;
        data_list = std::move(other.data_list);
        other.size_limit = 0;
    }
    return *this;
}

void Span::add_number(int number) {
    if (data_list.size() >= size_limit) {
        throw std::runtime_error("Container is full");
    }
    data_list.push_back(number);
}

int Span::find_shortest_span() const {
    if (data_list.size() < 2) {
        throw std::runtime_error("Not enough elements");
    }
    std::vector<int> sorted_data = data_list;
    std::sort(sorted_data.begin(), sorted_data.end());
    int min_difference = INT_MAX;
    for (size_t i = 1; i < sorted_data.size(); ++i) {
        min_difference = std::min(min_difference, sorted_data[i] - sorted_data[i-1]);
    }

    return min_difference;
}

int Span::find_longest_span() const {
    if (data_list.size() < 2) {
        throw std::runtime_error("Not enough elements");
    }

    int min_val = *std::min_element(data_list.begin(), data_list.end());
    int max_val = *std::max_element(data_list.begin(), data_list.end());

    return max_val - min_val;
}
