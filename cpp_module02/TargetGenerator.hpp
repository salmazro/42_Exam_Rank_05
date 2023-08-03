# ifndef TARGETGENERATOR
# define TARGETGENERATOR

#include <map>
#include "ATarget.hpp"


class TargetGenerator
{
	private:
		// attributes
		std::map < std::string, ATarget * > t_arr;

		// copy constructor
		TargetGenerator(TargetGenerator const & obj);

		// copy assignment operator
		TargetGenerator & operator = (TargetGenerator const & tg);

	public:
		// default constructor
		TargetGenerator();

		// destructor
		~TargetGenerator();

		// method
		void learnTargetType(ATarget* at);
		void forgetTargetType(std::string const & tname);
		ATarget* createTarget(std::string const & tname);
};

#endif
