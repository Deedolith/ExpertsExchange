#include "Light.h"
#include <iostream>

void Light::onOpen() const
{
	std::cout << "Turning the light ON." << std::endl;
}

void Light::onOpen(std::string const& color) const
{
	std::cout << "Turning the " << color << " light ON." << std::endl;
}

void Light::onClose() const
{
	std::cout << "Turning the lights OFF." << std::endl;
}
