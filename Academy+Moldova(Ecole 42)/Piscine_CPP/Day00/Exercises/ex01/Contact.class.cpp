//Contact.class.cpp by Carp-Bezverhnii Maxim
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::addContact()
{
	std::cout << "Enter first name for new contact :" << std::endl;
	std::cin >> this->_first_name;
	std::cin.ignore();
	std::cout << "Enter last name for new contact :" << std::endl;
	std::cin >> this->_last_name;
	std::cin.ignore();
	std::cout << "Enter nickname for new contact :" << std::endl;
	std::cin >> this->_nickname;
	std::cin.ignore();
	std::cout << "Enter login for new contact :" << std::endl;
	std::cin >> this->_login;
	std::cin.ignore();
	std::cout << "Enter postal address for new contact :" << std::endl;
	std::cin >> this->_postal_address;
	std::cin.ignore();
	std::cout << "Enter email address for new contact :" << std::endl;
	std::cin >> this->_email_address;
	std::cin.ignore();
	std::cout << "Enter phone number for new contact :" << std::endl;
	std::cin >> this->_phone_number;
	std::cin.ignore();
	std::cout << "Enter birthday date for new contact :" << std::endl;
	std::cin >> this->_birthday_date;
	std::cin.ignore();
	std::cout << "Enter favorite meal for new contact :" << std::endl;
	std::cin >> this->_favorite_meal;
	std::cin.ignore();
	std::cout << "Enter underwear color for new contact :" << std::endl;
	std::cin >> this->_underwear_color;
	std::cin.ignore();
	std::cout << "Enter darkest secret for new contact :" << std::endl;
	std::cin >> this->_darkest_secret;
	std::cin.ignore();

	++Contact::_nr_contact;
	Contact::_index++;
}

std::string Contact::getfirstName(void)
{
	return Contact::_first_name;
}

std::string Contact::getlastName(void)
{
	return Contact::_last_name;
}

std::string Contact::getNickname(void)
{
	return Contact::_nickname;
}

std::string Contact::getLogin(void)
{
	return Contact::_login;
}

std::string Contact::getpostalAddress(void)
{
	return Contact::_postal_address;
}

std::string Contact::getemailAddress(void)
{
	return Contact::_email_address;
}

std::string Contact::getphoneNumber(void)
{
	return Contact::_phone_number;
}

std::string Contact::getbirthdayDate(void)
{
	return Contact::_birthday_date;
}

std::string Contact::getfavoriteMeal(void)
{
	return Contact::_favorite_meal;
}

std::string Contact::getunderwearColor(void)
{
	return Contact::_underwear_color;
}

std::string Contact::getdarkestSecret(void)
{
	return Contact::_darkest_secret;
}

int Contact::getIndex(void)
{
	return Contact::_index;
}

int Contact::getnrContact(void)
{
	return Contact::_nr_contact;
}