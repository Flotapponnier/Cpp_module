/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:11:41 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:11:42 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook() : contact_count(0), oldest_index(0) {}

void Phonebook::add_contact(int i)
{
	if (contact_count < 9) 
	{
		contacts[contact_count].add_contact(i);
		contact_count++;
	}
	else 
	{
		contacts[oldest_index].add_contact(i);
		oldest_index = (oldest_index + 1) % 9;
	}
}

void print_column(const std::string& column_data)
{
    if (column_data.length() > 10) {
        std::cout << std::setw(10) << std::right << column_data.substr(0, 9) + ".";
    } else {
        std::cout << std::setw(10) << std::right << column_data;
    }
}

void Phonebook::display_contact(Contact &contact)
{
    std::cout << "Contact found:\n";
    std::cout << "Name: " << contact.name << "\n";
    std::cout << "Last Name: " << contact.last_name << "\n";
    std::cout << "Nickname: " << contact.nickname << "\n";
    std::cout << "Phone Number: " << contact.number<< "\n";
    std::cout << "Darkest Secrt: " << contact.darkest_secret << "\n";
}

void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}

void Phonebook::display_all_contact()
{
    if (contact_count == 0)
    {
        std::cout << "No contacts to display.\n";
        return;
    }

    std::cout << "---------------------------------------------\n";
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

    for (int i = 0; i < contact_count; i++)
    {

		std::cout << "|         " ;
		std::cout << i;
		std::cout << "|";
		print_name(contacts[i].name);
		std::cout << "|";
		print_name(contacts[i].last_name);
		std::cout << "|";
		print_name(contacts[i].nickname);
		std::cout << "| \n";

    }
}

void Phonebook::search_contact()
{
    bool found = false;

    if(Phonebook::contact_count == 0)
    {
        std::cout << "Contact list is empty \n";
        return;
    }
	Phonebook::display_all_contact();
    int input;
    std::cout << "Choose an index: ";
    std::cin >> input;
    if (std::cin.fail()) 
    {
        std::cout << "Invalid input. Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    for (int i = 0; i < contact_count; i++)
    {
        if (contacts[i].index == input)
        {
            display_contact(contacts[i]);
            found = true;
            break;
        }
    }
    if (!found)
        std::cout << "Contact not found \n";
}
