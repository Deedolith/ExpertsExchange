#include "ReactVisitor.h"
#include "Observer.h"

ReactVisitor::ReactVisitor(Observer const& observer) :
	mObserver{ observer }
{
}
void ReactVisitor::visit(OpenEvent const& event) const
{
	mObserver.onOpen();
}
void ReactVisitor::visit(CloseEvent const& event) const
{
	mObserver.onClose();
}