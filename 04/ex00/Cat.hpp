#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
	private :	
	std::string _type;
	public:
	/* Constructor -- Deconstructor */
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();

	/* Getter && setter */
	void setType(std::string newType);
	std::string getType() const;

	/* function */
	void makeSound() const;
};

#endif
