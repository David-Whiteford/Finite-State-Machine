#include "Animation.h"
#include "State.h"
#include "idle.h"
class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void Idle(Animation* a);
};

