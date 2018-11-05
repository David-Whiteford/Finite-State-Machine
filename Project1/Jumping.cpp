#include"Jumping.h"
void Jumping::Idle(Animation *a)
{
	std::cout << "Idling" << std::endl;
	//	a->setCurrent(new Idle());
	delete this;
}