#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    typedef std::stack<T> stack;
    typedef typename stack::container_type container;
    typedef typename container::iterator iterator;

    MutantStack();
    MutantStack(const stack &src);
    ~MutantStack();
    stack &operator=(const stack &src);
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP
