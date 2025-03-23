/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:12:39 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:12:40 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}


bool isNumber(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false; 
        }
    }
    return true;
}


void Contact::add_contact(int i)
{
    this->index = i;

    std::cout << "Contact Name? \n";
    std::cin.ignore();
    if (!std::getline(std::cin, name) || std::cin.eof()) {
        std::cout << "\nInput interrupted.\n";
        return;
    }
    while (name.empty()) {
        std::cout << "Name cannot be empty. Please enter a valid name.\n";
        if (!std::getline(std::cin, name) || std::cin.eof()) {
            std::cout << "\nInput interrupted.  .\n";
            return;
        }
    }

    std::cout << "Contact Lastname? \n";
    if (!std::getline(std::cin, last_name) || std::cin.eof()) {
        std::cout << "\nInput interrupted.  .\n";
        return;
    }
    while (last_name.empty()) {
        std::cout << "Last name cannot be empty. Please enter a valid last name.\n";
        if (!std::getline(std::cin, last_name) || std::cin.eof()) {
            std::cout << "\nInput interrupted.  .\n";
            return;
        }
    }

    std::cout << "Contact Nickname? \n";
    if (!std::getline(std::cin, nickname) || std::cin.eof()) {
        std::cout << "\nInput interrupted.  .\n";
        return;
    }
    while (nickname.empty()) {
        std::cout << "Nickname cannot be empty. Please enter a valid nickname.\n";
        if (!std::getline(std::cin, nickname) || std::cin.eof()) {
            std::cout << "\nInput interrupted.  .\n";
            return;
        }
    }

    std::cout << "Contact Number? \n";
    if (!std::getline(std::cin, number) || std::cin.eof()) {
        std::cout << "\nInput interrupted.  .\n";
        return;
    }
    while (number.empty() || !isNumber(number)) {
        std::cout << "Number cannot be empty and must be valid.\n";
        if (!std::getline(std::cin, number) || std::cin.eof()) {
            std::cout << "\nInput interrupted.  .\n";
            return;
        }
    }

    std::cout << "Darkest Secret? \n";
    if (!std::getline(std::cin, darkest_secret) || std::cin.eof()) {
        std::cout << "\nInput interrupted.  .\n";
        return;
    }
    while (darkest_secret.empty()) {
        std::cout << "Darkest secret cannot be empty. Please enter a valid one.\n";
        if (!std::getline(std::cin, darkest_secret) || std::cin.eof()) {
            std::cout << "\nInput interrupted.  .\n";
            return;
        }
    }

    std::cout << "Contact added successfully.\n";
}
void Contact::search_contact(void)
{
	std::cout <<"Searching Contact ..\n";
}

