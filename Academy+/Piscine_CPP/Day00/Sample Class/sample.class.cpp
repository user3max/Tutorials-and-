#include <iostream>
#include "sample.class.hpp"

/*
Sample::Sample(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	//this->foo = 42;
	//std::cout << "this->foo: " << this->foo << std::endl;

	//this->bar();
	
	
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	
	return;
}
*/
/*
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	//this syntax is called initialisation list
}
*/

/*
Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called" << std::endl;
	return;
}
*/

/*
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}
*/
/*
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return;
}
*/

/*
Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
*/
Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}
/*
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}
*/

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/*
void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
*/

/*
void	Sample::bar(void) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
}
*/

/*
void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	return;
}

//this - a pointer to the object instance

*/

/*
int Sample::getFoo(void) const
{
	return this->_foo;
}

void Sample::setFoo(int v)
{
	if(v >= 0)
		this->_foo = v;

	return;
}
*/

/*
int Sample::getFoo(void) const
{
	return this->_foo;
}

int Sample::compare(Sample * other) const
{
	if(this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;

	return 0;
}
*/
/*
int Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

int Sample::_nbInst = 0; //initialisation of non-member attribute (only way \
								initialize a static attribute

*/

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}