#include "Fwoosh.hpp"

// default constructor
Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

// destructor
Fwoosh::~Fwoosh() {}

// method
ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}
