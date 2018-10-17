//Character.hpp by Carp-Bezverhnii Maxim
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	//[...]
	std::string _name;
protected:
	int _AP;
public:
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	
	std::string getName() const;
	int			getAP() const;

	AWeapon* awp;
};

std::ostream & operator<<(std::ostream & o, Character const & src);
#endif