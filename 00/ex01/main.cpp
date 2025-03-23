/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:11:51 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:11:52 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook Phonebook;
	Contact Contact;

	std::string input;
	int i = 0;
	
while (true)
{
    std::cout << "Choose option : ADD | SEARCH | EXIT \n";
    if (!(std::cin >> input))
    {
        std::cout << "\nExiting program...\n";
        break;
    }

    if (input == "ADD")
    {
        Phonebook.add_contact(i);
        i++;
    }
    else if (input == "SEARCH")
        Phonebook.search_contact();
    else if (input == "EXIT")
        break;
    else
        std::cout << "Wrong input\n";
}
	return (0);
}
