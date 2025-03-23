/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:43:13 by ftapponn          #+#    #+#             */
/*   Updated: 2025/02/08 14:59:50 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie{
	public:
	Zombie(void);
	~Zombie();
	void announce(void);
	std::string getZombie() const;
	void setZombie(std::string newName);
	
private:
	std::string name;
};

void randomChump(std::string NewName);
Zombie	*newZombie(std::string name);
#endif
