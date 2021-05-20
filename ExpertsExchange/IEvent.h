#ifndef IEVENT_H
#define IEVENT_H

class IEventVisitor;

class IEvent
{
private:
public:
	virtual ~IEvent() = default;
	virtual void visit(IEventVisitor const&) const = 0;
};

#endif
