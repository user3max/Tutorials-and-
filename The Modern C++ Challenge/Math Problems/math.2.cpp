//math.2.cpp by Carp-Bezverhnii Maxim
#include <iostream>
#include <utility>

int gcd(int a, int b)
{
	int r;
	if(a < b) std::swap(a, b);
	r = a % b;
	if (r == 0) return b;

	return gcd(b, r);
}


/*
unsigned int gcd(unsigned int const a, unsigned int const b)
{
return b == 0 ? a : gcd(b, a % b);
}
*/

int main()
{
	int a, b;

	std::cout << "Please enter two number for find gcd " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "Gcd is : "<< gcd(a, b) << std::endl;
	return 0;
}
/*
Write a program that, given two positive integers, will calculate and
print the greatest common divisor of the two.
*/