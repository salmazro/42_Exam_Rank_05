# ifndef POLYMORPH
# define POLYMORPH

#include "ASpell.hpp"

class Polymorph: public ASpell
{
	public:
		// default constructor
		Polymorph();

		// destructor
		~Polymorph();

		// method
		virtual ASpell *clone() const;
};

#endif
