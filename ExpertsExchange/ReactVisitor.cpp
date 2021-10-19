#include "ReactVisitor.h"
#include "Observer.h"
#include "OpenEvent.h"

ReactVisitor::ReactVisitor(Observer const& observer) :
	mObserver{ observer }
{
}
void ReactVisitor::visit(OpenEvent const& event) const
{
	if (event.hasColor())
		mObserver.onOpen(event.getColor());
	else
		mObserver.onOpen();
}
void ReactVisitor::visit(CloseEvent const& event) const
{
	mObserver.onClose();
}