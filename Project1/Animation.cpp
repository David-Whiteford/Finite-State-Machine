#include"Animation.h"
Animation::Animation()
{
	current = new Idle();
}

void Animation::idle(Animation* a)
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}
//added walking to animation
void Animation::walking()
{
	current->walking(this);
}
//added swordmanship to animation
void Animation::swordmanship()
{
	current->swordmanship(this);
}
//added looting to animation
void Animation::looting()
{
	current->looting(this);
}
//added shovelling to animation
void Animation::shovelling()
{
	current->shovelling(this);
}
//added falling to animation
void Animation::falling()
{
	current->falling(this);
}
