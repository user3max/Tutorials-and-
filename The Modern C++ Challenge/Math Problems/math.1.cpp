//math.1.cpp by Carp-Bezverhnii Maxim
#include <iostream>

int sumdiv(int limit)
{
	int n, sum;

	while(n <= limit)
	{
		if(n % 3 == 0 || n % 5 == 0)
			sum = n + sum;
		n++;
	}
	return sum;
}


int main()
{
	int limit;

	std::cout << "Please enter a limit:" << std::endl;
	std::cin >> limit;
	std::cout << "Sum is " << sumdiv(limit) << std::endl;
	return 0;
}

/*
Write a program that calculates and prints the sum of all the natural
numbers divisible by either 3 or 5, up to a given limit entered by the
user.
*/