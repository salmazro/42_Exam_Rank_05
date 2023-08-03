#include "Warlock.hpp"

// move constructor
Warlock::Warlock(std::string const & name, std::string const & title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

// destructor
Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

// getter & setter
std::string const & Warlock::getName() const
{
	return (this->name);
}

std::string const & Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const & title)
{
	this->title = title;
}

// method
void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}
