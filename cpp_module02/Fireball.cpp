#include "Fireball.hpp"

// default constructor
Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

// destructor
Fireball::~Fireball() {}

// method
ASpell *Fireball::clone() const
{
	return (new Fireball());
}
