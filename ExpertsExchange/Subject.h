#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <cassert>

class Observer;
class IEvent;

class Subject
{
private:
	std::vector<Observer*> mObservers;
public:
	void subscribe(Observer* observer);
	void unSubscribe(Observer* observer);
	void raiseEvent(IEvent const& event);
};

#endif
