#pragma once
#include"State.h"
#include"Animation.h"
#include"Climbing.h"
#include"Idle.h"
class Idle : public State
{
public:
	Idle() {};
	~Idle() {};

	//functions for each state
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void swordmanship(Animation* a);
	void looting(Animation* a);
	void shovelling(Animation* a);
	void falling(Animation* a);
};
