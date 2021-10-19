#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class IEvent;

class Observer
{
private:
public:
	void notify(IEvent const& event);
	virtual void onOpen() const;
	virtual void onOpen(std::string const& color) const;
	virtual void onClose() const;
};

#endif
