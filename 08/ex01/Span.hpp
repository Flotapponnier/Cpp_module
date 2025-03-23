#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span {
private:
    unsigned int size_limit;
    std::vector<int> data_list;

public:
    Span(unsigned int limit);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
    Span(Span&& other);
    Span& operator=(Span&& other);

    void add_number(int number);
    
    template<typename I>
    void add_range(I start, I end) {
        if (std::distance(start, end) + data_list.size() > size_limit) {
            throw std::runtime_error("Range exceeds container limit");
        }
        data_list.insert(data_list.end(), start, end);
    }

    int find_shortest_span() const;
    int find_longest_span() const;
};

#endif
