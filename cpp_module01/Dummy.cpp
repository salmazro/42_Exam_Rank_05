#include "Dummy.hpp"

// default constructor
Dummy::Dummy() : ATarget("Target Practice Dummy") {}

// destructor
Dummy::~Dummy() {}

// method
ATarget *Dummy::clone() const
{
	return (new Dummy());
}
