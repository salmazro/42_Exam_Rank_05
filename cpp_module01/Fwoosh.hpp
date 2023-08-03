# ifndef FWOOSH
# define FWOOSH

#include "ASpell.hpp"

class Fwoosh: public ASpell
{
	public:
		// default constructor
		Fwoosh();

		// destructor
		~Fwoosh();

		// method
		virtual ASpell *clone() const;
};

#endif
