# ifndef FIREBALL
# define FIREBALL

#include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
		// default constructor
		Fireball();

		// destructor
		~Fireball();

		// method
		virtual ASpell *clone() const;
};

#endif
