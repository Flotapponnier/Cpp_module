#include "Animal.hpp"

Animal::Animal():_type("Default"){
std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(const Animal &other):_type(other._type){
	std::cout << "Copy constructor animal called " << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if(this != &other)
		_type = other._type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Destructor Animal Called";
}

void Animal::setType(std::string newType){
	this->_type = newType;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}
