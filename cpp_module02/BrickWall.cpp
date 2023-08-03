#include "BrickWall.hpp"

// default constructor
BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

// destructor
BrickWall::~BrickWall() {}

// method
ATarget *BrickWall::clone() const
{
	return (new BrickWall());
}
