class Animation;
class Climbing;

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	
	
	void idle(Animation* a)
	{
		std::cout << "Going from climbing to Idling" << std::endl;
		//a->setCurrent(new Idle());
		delete this;
	}
};