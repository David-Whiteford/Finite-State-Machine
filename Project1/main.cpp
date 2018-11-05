#include<iostream>
#include<chrono>
#include<thread>

#include "Animation.h"

int main()
{
	Animation fsm; 
	int i = 0;
	
	
	while (true) 
	{
		if (i == 0) 
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 1;
		}

		else if (i == 1)
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 2;
		}
		else if (i == 2)
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 3;
		}
		else if (i == 3)
		{
			fsm.swordmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 4;
		}
		else if (i == 4)
		{
			fsm.looting();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 5;
		}
		else if (i == 5)
		{
			fsm.shovelling();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 6;
		}
		
	}

	fsm.walking();
	fsm.jumping();
	fsm.falling();
}