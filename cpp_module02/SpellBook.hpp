# ifndef SPELLBOOK
# define SPELLBOOK

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
	private:
		// attributes
		std::map < std::string, ASpell * > s_arr;

		// copy constructor
		SpellBook(SpellBook const & obj);

		// copy assignment operator
		SpellBook & operator = (SpellBook const & sb);

	public:
		// default constructor
		SpellBook();

		// destructor
		~SpellBook();

		// method
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};

#endif
