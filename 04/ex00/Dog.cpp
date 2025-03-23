#include "Dog.hpp"

Dog::Dog():_type("Dog"){
std::cout << "Constructor Cat called" << std::endl;
}

Dog::Dog(const Dog &other):_type(other._type){
	std::cout << "Copy constructor animal called " << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
		_type = other._type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Destructor Animal Called";
}

void Dog::makeSound() const{
	std::cout << "WOUF WOUF " << std::endl;
}

void Dog::setType(std::string newType){
	this->_type = newType;
}

std::string Dog::getType() const {
	return this->_type;
}
