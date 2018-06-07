#include "StdAfx.h"
#include "Callbacks.h"

#include <iostream>


Callbacks::Callbacks(int x)
{
	this->size = x;
	this->top = 0;
	cbs =  new function_pointer[x];

}

Callbacks::~Callbacks(void)
{
	delete cbs;
}

int Callbacks::get_size(void)
{
	return this->size;
}

int Callbacks::get_top(void)
{
	return this->top;
}

int Callbacks::set_callback(function_pointer cb)
{
	if (top < size) {
		cbs[top] = cb;
		top++;
		return top;
	}
}

void Callbacks::execute_all(void)
{
	for(int index=0;index<this->top;index++) {
		try {
			this->cbs[index]();
		} catch (std::runtime_error &e) {
			std::cout << e.what() << std::endl;
		}
	}
}