#include "Light.h"
#include <iostream>

void Light::onOpen() const
{
	std::cout << "Turning the light ON." << std::endl;
}

void Light::onClose() const
{
	std::cout << "Turning the light OFF." << std::endl;
}
