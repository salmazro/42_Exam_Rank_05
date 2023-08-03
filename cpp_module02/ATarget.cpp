#include "ATarget.hpp"

// default constructor
ATarget::ATarget() {}

// copy constructor
ATarget::ATarget(ATarget const & obj)
{
	*this = obj;
}

// move constructor
ATarget::ATarget(std::string const & type)
{
	this->type = type;
}

// copy assignment operator
ATarget & ATarget::operator = (ATarget const & at)
{
	this->type = at.type;
	return (*this);
}

// destructor
ATarget::~ATarget() {}

// getter & setter
std::string const & ATarget::getType() const
{
	return (this->type);
}

// method
void ATarget::getHitBySpell(ASpell const & as_ref) const
{
	std::cout << this->type << " has been " << as_ref.getEffects() << "!\n";
}
