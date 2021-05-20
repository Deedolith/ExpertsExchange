#ifndef OBSERVER_H
#define OBSERVER_H

class IEvent;

class Observer
{
private:
public:
	void notify(IEvent const& event);
	virtual void onOpen() const;
	virtual void onClose() const;
};

#endif
