#ifndef STATE_H
#define STATE_H

#include<iostream>

class Idle;
class Animation;

class State
{
public:
	virtual void idle(Animation* a)
	{
		std::cout << "State::Idling" << std::endl;
	}

	virtual void jumping(Animation* a)
	{
		std::cout << "State::Jumping" << std::endl;
	}

	virtual void climbing(Animation* a)
	{
		std::cout << "State::climbing" << std::endl;
	}
	//added new state walking
	virtual void walking(Animation* a)
	{
		std::cout << "State::walking" << std::endl;
	}
	//added new state
	virtual void swordmanship(Animation* a)
	{
		std::cout << "State::swordmanship" << std::endl;
	}
	//added new state
	virtual void looting(Animation* a)
	{
		std::cout << "State::looting" << std::endl;
	}
	//added new state
	virtual void shovelling(Animation* a)
	{
		std::cout << "State::shovelling" << std::endl;
	}
	//added new state
	virtual void falling(Animation* a)
	{
		std::cout << "State::falling" << std::endl;
	}



};
#endif


