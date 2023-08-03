#include "ASpell.hpp"

// default constructor
ASpell::ASpell() {}

// copy constructor
ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}

// move constructor
ASpell::ASpell(std::string const & name, std::string const & effects)
{
	this->name = name;
	this->effects = effects;
}

// copy assignment operator
ASpell & ASpell::operator = (ASpell const & as)
{
	this->name = as.name;
	this->effects = as.effects;
	return (*this);
}

// destructor
ASpell::~ASpell(){}

// getter & setter
std::string const & ASpell::getName() const
{
	return (this->name);
}

std::string const & ASpell::getEffects() const
{
	return (this->effects);
}

// method
void ASpell::launch(ATarget const & at_ref) const
{
	at_ref.getHitBySpell(*this);
}
