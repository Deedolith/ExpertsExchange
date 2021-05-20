#ifndef IEVENTVISITOR_H
#define IEVENTVISITOR_H

class OpenEvent;
class CloseEvent;

class IEventVisitor
{
private:
public:
	virtual ~IEventVisitor() = default;
	virtual void visit(OpenEvent const&) const = 0;
	virtual void visit(CloseEvent const&) const = 0;
};

#endif
