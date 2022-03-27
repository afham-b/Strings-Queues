#pragma once

#include <cstdlib>

template <typename T>
class stack {
public:
	stack () { }
	bool empty () { }
	void pop () { }
	void push (const T& val) { }
	size_t size () { }
	T& top () { }
};
