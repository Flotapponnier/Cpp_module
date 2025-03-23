
#include "Cat.hpp"

Cat::Cat():_type("Cat"){
std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(const Cat &other):_type(other._type){
	std::cout << "Copy constructor animal called " << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
		_type = other._type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Destructor Animal Called";
}

void Cat::makeSound() const{
	std::cout << "MIAAAOUU" << std::endl;
}

void Cat::setType(std::string newType){
	this->_type = newType;
}

std::string Cat::getType() const {
	return this->_type;
}
