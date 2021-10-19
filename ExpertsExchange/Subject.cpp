#include "Subject.h"
#include "Observer.h"
#include <cassert>

void Subject::subscribe(Observer* observer)
{
	mObservers.push_back(observer);
}

void Subject::unSubscribe(Observer* observer)
{
	auto it{ std::remove_if(mObservers.begin(), mObservers.end(), [observer](Observer* item) {return item == observer; }) };
	assert(it != mObservers.end());
	mObservers.erase(it);
}

void Subject::raiseEvent(IEvent const& event)
{
	for (auto observer : mObservers)
		observer->notify(event);
}
