//Pony.hpp by Carp-Bezverhnii Maxim
#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
	std::string _name;
	std::string _color = "Pink";
	std::string _nr;
public:
	Pony(void);
	~Pony(void);

	void setName(std::string);
	void setAge(int);
	void setNr(std::string);
	std::string getName(void);
	std::string getColor(void);
	std::string getNr(void);
};

#endif