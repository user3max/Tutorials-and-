//main.cpp by Carp-Bezverhnii Maxim
#include "Contact.class.hpp"

Contact contact[9];

std::string check_output(std::string str)
{
	int n = 0;
	while(str[n])
	{
		str[n++];
	}
	if (n >= 10)
	{
		str = str.substr(0, 9);
		return str + ".";
	}
	else
		return str;
}

void printfullinfo(int input)
{
	std::cout << "First Name: "<< contact[input].getfirstName() << std::endl;
	std::cout << "Last Name: "<< contact[input].getlastName() << std::endl;
	std::cout << "Nickname: "<< contact[input].getNickname() << std::endl;
	std::cout << "Login: "<< contact[input].getLogin() << std::endl;
	std::cout << "Postal Address: "<< contact[input].getpostalAddress() << std::endl;
	std::cout << "Email Address: "<< contact[input].getemailAddress() << std::endl;
	std::cout << "Phone Number: "<< contact[input].getphoneNumber() << std::endl;
	std::cout << "Birthday Date: "<< contact[input].getbirthdayDate() << std::endl;
	std::cout << "Favorite Meal: "<< contact[input].getfavoriteMeal() << std::endl;
	std::cout << "Underwear Color: "<< contact[input].getunderwearColor() << std::endl;
	std::cout << "Secret: "<< contact[input].getdarkestSecret() << std::endl;
	std::cin.ignore();
}

void printContact()
{
	int i = 1;
	int inp, valid;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" \
			<< "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" <<std::endl;
	while(i < Contact::getIndex())
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << check_output(contact[i].getfirstName()) \
			<< "|" << std::setw(10) << check_output(contact[i].getlastName()) << "|" << std::setw(10) << check_output(contact[i].getNickname()) <<std::endl;						
		i++;
		valid = i;
	}
	std::cout << "Put index number to watch full contact information!" << std::endl;
	std::cin >> inp;
	if (inp < valid)
		printfullinfo(inp);
	else
	{
		std::cout << "Input number doesn't exists!" << std::endl;
		std::cin.ignore();
	}
}

int Contact::_nr_contact = 1;
int Contact::_index = 1;

int main()
{
	std::string command;
	
	while(command != "EXIT")
	{		
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, command, '\n');
		if (command == "ADD")
		{
			if(Contact::getnrContact() < 9)
				contact[Contact::getnrContact()].addContact();
			else
				std::cout << "You reached maximum number of contacts!" << std::endl;
		}
		else if(command == "SEARCH")
			printContact();
		else if (command != "EXIT" && command != "SEARCH" && command != "ADD")
			std::cout << "Please enter a valid command!\n" << "Only available ADD, SEARCH and EXIT" << std::endl;
	}
	return 0;
}