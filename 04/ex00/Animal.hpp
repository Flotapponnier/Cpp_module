#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected : 
	std::string _type;
	public :
	/* Constructor -- Deconstructor */
	Animal();
	Animal(const Animal &other);
   	Animal& operator=(const Animal& other);
	virtual ~Animal();

	/* Setter && Getter */
	void setType(std::string newType);
	std::string getType() const;

	/* function */
	virtual void makeSound() const;
};
#endif
