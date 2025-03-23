#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
	private :	
	std::string _type;
	public:
	/* Constructor -- Deconstructor */ 
	Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	~Dog();

	/* Setter && Getter */
	void setType(std::string newType);
	std::string getType() const;

	/* function */
	void makeSound() const;
};

#endif
