# ifndef ATARGET
# define ATARGET

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		// attributes
		std::string type;

	public:
		// default constructor
		ATarget();

		// copy constructor
		ATarget(ATarget const & obj);

		// move constructor
		ATarget(std::string const & type);

		// copy assignment operator
		ATarget & operator = (ATarget const & at);

		// destructor
		virtual ~ATarget();

		// getter & setter
		std::string const & getType() const;

		// method
		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const & as_ref) const;
};

#endif

