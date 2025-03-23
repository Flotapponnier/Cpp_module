
template <class T>
MutantStack<T>::MutantStack() : stack()
{
    std::cout << "Default Constructor called" << std::endl;
}

template <class T>
MutantStack<T>::MutantStack(const stack &src) : stack(src)
{
    std::cout << "Copy Constructor called" << std::endl;
}

template <class T>
MutantStack<T>::~MutantStack()
{
    std::cout << "Destructor called" << std::endl;
}

template <class T>
typename MutantStack<T>::stack &MutantStack<T>::operator=(const stack &src)
{
    if (this != &src)
    {
        stack::operator=(src);
    }
    return *this;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}
