# ifndef DUMMY
# define DUMMY

#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		// default constructor
		Dummy();

		// destructor
		~Dummy();

		// method
		virtual ATarget *clone() const;
};

#endif
