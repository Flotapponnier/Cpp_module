#include <iostream>


template< typename T >

void Swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template< typename V >

const V Min(V const a, V const b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename Z>

const Z Max(Z const a, Z const b)
{
	if (a > b)
		return a;
	else
		return b;
}
