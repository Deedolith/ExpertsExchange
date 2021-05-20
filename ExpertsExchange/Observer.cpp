#include "Observer.h"
#include "IEvent.h"
#include "ReactVisitor.h"

void Observer::notify(IEvent const& event)
{
	ReactVisitor visitor{ *this };
	event.visit(visitor);
}

void Observer::onOpen() const
{
}

void Observer::onClose() const
{
}
