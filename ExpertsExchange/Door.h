#ifndef DOOR_H
#define DOOR_H

#include "Subject.h"

class Door :
	public Subject
{
private:
public:
	void open();
	void close();
};

#endif
