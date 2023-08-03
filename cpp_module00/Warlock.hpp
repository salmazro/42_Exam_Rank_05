# ifndef WARLOCK
# define WARLOCK

#include <iostream>

class Warlock
{
	private:
		// attributes
		std::string name;
		std::string title;

		// default constructor
		Warlock();

		// copy constructor
		Warlock(Warlock const & obj);

		// copy assignment operator
		Warlock & operator = (Warlock const & wl);

	public:
		// move constructor
		Warlock(std::string const & name, std::string const & title);

		// destructor
		~Warlock();

		// getter & setter
		std::string const & getName() const;
		std::string const & getTitle() const;
		void	setTitle(std::string const & title);

		// method
		void	introduce() const;
};

#endif
