#include <iostream>

int main()
{
	std::string var = "HI THIS IS BBAIN.";
	std::string *stringPTR = &var;
	std::string &stringREF= var;

	std::cout << "Memory adress of the string :" << &var << '\n' ;
	std::cout << "Memory adress of the pointer :" <<stringPTR << '\n';
	std::cout << "Memory adress of the reference:" << &stringREF << '\n';
	
	std::cout << "\n Memory value of the string :" << var << '\n' ;
	std::cout << "Memory value of the pointer :" <<*stringPTR << '\n';
	std::cout << "Memory value of the reference:" << stringREF << '\n';
}
