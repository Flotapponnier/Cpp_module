/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 08:10:15 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/09 08:11:27 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#ifndef CONTACT_HPP 
#define CONTACT_HPP

#include <iostream>

class Contact{

	public:

	int index;
	std::string name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;
	void	add_contact(int i);
	void	search_contact(void);
	Contact(void);
	~Contact(void);
};

#endif
