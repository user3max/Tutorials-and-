#include <iostream>
#include "sample.class.hpp"

/*
void	f0(void)
{
	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1(void)
{
	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f0();

	return;
}
*/

int main()
{
	//Sample instance;

	/*
	instance.foo = 42;
	std::cout << "instance foo:" << instance.foo << std::endl;

	instance.bar();
	*/
	/*
	Sample instance1('a', 42, 4.2f);
	Sample instance2('z', 13, 3.14f);
	*/
	/*
	Sample instance(3.14f);

	instance.bar();
	*/
	//Sample instance;

	//instance.publicFoo = 42;
	//std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	//instance._privateFoo = 42;
	//std::cout << "instance._privateFoo: " << instance._privateFoo << std::emdl;

	//instance.publicBar();
	//instance._privateBar();
	/*
	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	*/

	/*
	Sample instance1(42);
	Sample instance2(42);

	if(&instance1 == &instance1)
		std::cout << "instance1 and instance1 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not physically equal" << std::endl;

	if(&instance1 == &instance2)
		std::cout << "instance1 and instance2 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not physically equal" << std::endl;

	if(instance1.compare(&instance1) == 0)
		std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

	if(instance1.compare(&instance2) == 0)
		std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 ans instance2 are not structurally equal" << std::endl;
	*/

	/*
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	*/

	Sample instance;
	Sample * instancep = &instance;

	int Sample::*p = NULL;
	void (Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}