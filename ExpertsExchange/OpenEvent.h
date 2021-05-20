#ifndef OPENEVENT_H
#define OPENEVENT_H

#include "IEvent.h"

class OpenEvent :
	public IEvent
{
private:
public:
	void visit(IEventVisitor const& visitor) const override;
};

#endif
