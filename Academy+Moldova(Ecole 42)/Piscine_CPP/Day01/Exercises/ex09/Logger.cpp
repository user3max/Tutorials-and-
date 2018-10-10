//Logger.cpp by Carp-Bezverhnii Maxim
#include "Logger.hpp"

Logger::Logger(std::string filename) : file_name(filename) {}

Logger::~Logger() {}

void Logger::logToConsole(std::string const & str)
{
	std::cout << "Log to console are called!" << std::endl;
	std::cout << "Start... logToConsole" << std::endl;
	std::cout << makeLogEntry(str) << std::endl;
	std::cout << "Finish... logToConsole" << std::endl;
	std::cout << std::endl;
}

void Logger::logToFile(std::string const & str)
{
	std::cout << "Log to file are called!" << std::endl;
	std::cout << "Start... logToFile" << std::endl;
	std::ofstream file;
	file.open(this->file_name, std::ios_base::app);
	file << makeLogEntry(str);
	file.close();
	std::cout << "..." << std::endl;
	std::cout << "Finish... logToFile" << std::endl;
}

std::string Logger::makeLogEntry(std::string const & message)
{
	time_t now = time(0);
	char * dt = ctime(&now);

	return dt + message;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	int i = 0;
	log_type logto[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string destination[] = {"console", "file"};

	while(i < 2)
	{
		if(dest == destination[i])
			(this->*logto[i])(message);
		i++;
	}
}
