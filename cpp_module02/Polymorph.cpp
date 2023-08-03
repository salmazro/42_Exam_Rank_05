#include "Polymorph.hpp"

// default constructor
Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

// destructor
Polymorph::~Polymorph() {}

// method
ASpell *Polymorph::clone() const
{
	return (new Polymorph());
}
