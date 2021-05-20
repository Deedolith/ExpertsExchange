#ifndef LIGHT_H
#define LIGHT_H

#include "Observer.h"

class Light :
	public Observer
{
private:
public:
	virtual void onOpen() const override;
	virtual void onClose() const override;
};

#endif
