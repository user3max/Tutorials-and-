//main.cpp by Carp-Bezverhnii Maxim
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string option;

	std::cout << "'f' - create new FragTrap robot" << std::endl;
	std::cout << "'s' - create new ScavTrap robot" << std::endl;
	std::cin >> option;

	if (option == "f")
	{
		std::string name;
		std::cout << "Enter name for new FragTrap robot:" << std::endl;
		std::cin >> name;

		FragTrap r(name);

		while (option != "e")
		{
			std::cout << "Enter 'Help' for show action list!" << std::endl;
			std::cout << "If you want to exit enter 'e'" << std::endl;
			std::cout << "Choose action :" << std::endl;
			std::cin >> option;

			if(option == "Help")
			{
				std::cout << "'r' - rangedAttack" << std::endl;
				std::cout << "'m' - meleeAttack" << std::endl;
				std::cout << "'a' - takeDamage" << std::endl;
				std::cout << "'h' - beRepaired" << std::endl;
				std::cout << "'v' - vaulthunter_dot_exe" << std::endl;
			}
			else if (option == "r")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.rangedAttack(target_name);
			}
			else if (option == "m")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.meleeAttack(target_name);
			}
			else if (option == "a")
			{
				int amount;
				std::cout << "Enter amount:" << std::endl;
				std::cin >> amount;

				r.takeDamage(amount);
			}
			else if (option == "h")
			{
				int amount;
				std::cout << "Enter amount:" << std::endl;
				std::cin >> amount;

				r.beRepaired(amount);
			}
			else if (option == "v")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.vaulthunter_dot_exe(target_name);
			}
		}
	}
	else if (option == "s")
	{
		std::string name;
		std::cout << "Enter name for new ScavTrap robot:" << std::endl;
		std::cin >> name;

		ScavTrap r(name);

		while (option != "e")
		{
			std::cout << "Enter 'Help' for show action list!" << std::endl;
			std::cout << "If you want to exit enter 'e'" << std::endl;
			std::cout << "Choose action :" << std::endl;
			std::cin >> option;

			if(option == "Help")
			{
				std::cout << "'r' - rangedAttack" << std::endl;
				std::cout << "'m' - meleeAttack" << std::endl;
				std::cout << "'a' - takeDamage" << std::endl;
				std::cout << "'h' - beRepaired" << std::endl;
				std::cout << "'v' - challengeNewcomer" << std::endl;
			}
			else if (option == "r")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.rangedAttack(target_name);
			}
			else if (option == "m")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.meleeAttack(target_name);
			}
			else if (option == "a")
			{
				int amount;
				std::cout << "Enter amount:" << std::endl;
				std::cin >> amount;

				r.takeDamage(amount);
			}
			else if (option == "h")
			{
				int amount;
				std::cout << "Enter amount:" << std::endl;
				std::cin >> amount;

				r.beRepaired(amount);
			}
			else if (option == "v")
			{
				std::string target_name;
				std::cout << "Enter the name of the target:" << std::endl;
				std::cin >> target_name;

				r.challengeNewcomer(target_name);
			}
		}
	}
	else
	{
		std::cout << "Please enter 'f' or 's' for create new robot!" << std::endl;
		std::cin >> option;
	}

	return 0;
}