//main.cpp by Carp-Bezverhnii Maxim
#include "ZombieEvent.hpp"

void randomZombie(int nr)
{
	Zombie* zmb[nr];
	ZombieEvent event;
	int i = 0;
	int n = 0;

	event.ZombieEvent::setZombieType("Human");
	std::cout << "Wait I will give some name for your zombies..." << std::endl;
	while (i < nr)
	{
		zmb[i++] = event.ZombieEvent::randomChump();
	}

	while (n < nr)
	{
		delete zmb[n++];
	}

}

void	customZombie()
{
	Zombie* zmb = new Zombie;
	ZombieEvent event;
	std::string name, type;

	std::cout << "Sets type for you zombies :" << std::endl;
	std::cin >> type;
	event.ZombieEvent::setZombieType(type);
	std::cout << "Sets name for you zombies :" << std::endl;
	std::cin >> name;
	event.ZombieEvent::newZombie(name);

	delete zmb;
}

int main()
{ 
	int number = 0;
	std::string type, name, option;

	std::cout << "Zombieland" << std::endl;
	std::cout << "1.Create random Zombie" << std::endl;
	std::cout << "2.Create custom Zombie" << std::endl;
	std::cout << "3.EXIT" << std::endl;
	while(option != "3")
	{
		std::cin >> option;
		if(option == "1")
		{
			std::cout << "Enter how much Zombies you want to create?" << std::endl;
			std::cin >> number;
			randomZombie(number);
		}
		else if (option == "2")
			customZombie();
		else if(option != "1" && option != "2" && option != "3")
		{
			std::cout << "Only available option is \"1\", \"2\" and \"3\" for \"EXIT\" "<< std::endl;
		}
	}
	return (0);
}