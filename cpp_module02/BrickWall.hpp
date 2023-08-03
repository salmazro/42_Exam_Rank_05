# ifndef BTICKWALL
# define BTICKWALL

#include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		// default constructor
		BrickWall();

		// destructor
		~BrickWall();

		// method
		virtual ATarget *clone() const;
};

#endif
