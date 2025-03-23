/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:11:45 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:13:46 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook {
	private:
		Contact contacts[9];
		int contact_count;
		int oldest_index;

	public:
		Phonebook();
		void add_contact(int i);
		void display_contact(Contact &contact);
		void display_all_contact();
		void search_contact();
};

#endif
