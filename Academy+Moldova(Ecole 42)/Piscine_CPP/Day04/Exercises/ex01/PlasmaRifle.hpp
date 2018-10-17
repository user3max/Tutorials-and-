//PlasmaRifle.hpp by Carp-Bezverhnii Maxim
#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle(void);

	void attack() const;
};

#endif