//ex01.cpp by Carp-Bezverhnii Maxim
void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}