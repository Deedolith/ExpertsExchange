#ifndef CLOSEEVENT_H
#define CLOSEEVENT_H

#include "IEvent.h"

class CloseEvent :
	public IEvent
{
private:
public:
	void visit(IEventVisitor const& visitor) const override;
};

#endif
