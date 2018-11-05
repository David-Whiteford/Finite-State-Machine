#include"idle.h"
void Idle::jumping(Animation *a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation* a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
/// Added the new states to the idle
/// Also added the message related to that state

void Idle::walking(Animation* a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swordmanship(Animation* a)
{
	std::cout << "Swordmanship" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
/// Added the new states to the idle
/// Also added the message related to that state
void Idle::looting(Animation* a)
{
	std::cout << "looting" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shovelling(Animation* a)
{
	std::cout << "Shovelling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
/// Added the new states to the idle
/// Also added the message related to that state
void Idle::falling(Animation* a)
{
	std::cout << "Falling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

