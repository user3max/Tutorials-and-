//Contact.class.hpp by Carp-Bezverhnii Maxim
#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
	static int _nr_contact;
	static int _index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
public:
	Contact();
	~Contact();
	
	static int getnrContact(void);
	static int getIndex(void);
	std::string getfirstName(void);
	std::string getlastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getpostalAddress(void);
	std::string getemailAddress(void);
	std::string getphoneNumber(void);
	std::string getbirthdayDate(void);
	std::string getfavoriteMeal(void);
	std::string getunderwearColor(void);
	std::string getdarkestSecret(void);

	void addContact(void);
};

#endif //CONTACTS_CLASS_HPP