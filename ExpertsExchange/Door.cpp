#include "Door.h"
#include <iostream>
#include "OpenEvent.h"
#include "CloseEvent.h"

void Door::open()
{
	std::cout << "Door opened." << std::endl;
	raiseEvent(OpenEvent{});
}

void Door::close()
{
	std::cout << "Door closed." << std::endl;
	raiseEvent(CloseEvent{});
}
