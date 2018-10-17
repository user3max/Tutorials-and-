#include <string>
#include <iostream>

//A... for abstract class
class ACharacter
{
private:
	std::string		name;

public:
	virtual void	attack(std::string const & target) = 0;
	void			sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
public:
	virtual void	attack(std::string const & target);
};

void	ACharacter::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const & target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

//I... for Interface
/*class ICoffeeMaker
{
public:
	virtual void		fillWaterTank(IWaterSource * src) = 0;
	virtual ICoffee* 	makeCoffee(std::string const & type) = 0;
};*/

int main()
{
	ACharacter*		a = new Warrior();

	//This would NOT be ok because ACharacter is abstract
	//ACharacter*	b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
}