//Logger.hpp by Carp-Bezverhnii Maxim
#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger
{
	void logToConsole(std::string const & message);
	void logToFile(std::string const & message);
	std::string makeLogEntry(std::string const & message);
public:
	Logger(std::string);
	~Logger();
	void log(std::string const & dest, std::string const & message);
	std::string file_name;
};

typedef void(Logger::*log_type)(std::string const & message);

#endif