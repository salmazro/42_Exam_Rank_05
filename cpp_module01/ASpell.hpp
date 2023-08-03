# ifndef ASPELL
# define ASPELL

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		// attributes
		std::string name;
		std::string effects;

	public:
		// default constructor
		ASpell();

		// copy constructor
		ASpell(ASpell const & obj);

		// move constructor
		ASpell(std::string const & name, std::string const & effects);

		// copy assignment operator
		ASpell & operator = (ASpell const & as);

		// destructor
		virtual ~ASpell();

		// getter & setter
		std::string const & getName() const;
		std::string const & getEffects() const;

		// method
		virtual ASpell *clone() const = 0;

		void launch(ATarget const & at_ref) const;
};

#endif

