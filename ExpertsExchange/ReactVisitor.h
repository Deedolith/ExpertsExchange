#ifndef REACTVISITOR_H
#define REACTVISITOR_H

#include "IEventVisitor.h"

class Observer;

class ReactVisitor :
	public IEventVisitor
{
private:
	Observer const& mObserver;
public:
	ReactVisitor(Observer const& observer);
	void visit(OpenEvent const& event) const override;
	void visit(CloseEvent const& event) const override;
};

#endif
