
#ifndef ANIMATION_H
#define ANIMATION_H

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}
	
	void idle(Animation* a);
	void jumping();
	void climbing();
	void walking();
	void swordmanship();
	void looting();
	void shovelling();
	void falling();
};

#include"Idle.h"
#include"State.h"
#endif