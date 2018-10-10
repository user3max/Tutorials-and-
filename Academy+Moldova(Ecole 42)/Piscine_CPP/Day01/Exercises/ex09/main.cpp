//main.cpp by Carp-Bezverhnii Maxim
#include "Logger.hpp"

int main()
{
	Logger log("log.txt");

	log.log("console", "output thit to console");
	log.log("file", "write this in file");

	return 0;
}