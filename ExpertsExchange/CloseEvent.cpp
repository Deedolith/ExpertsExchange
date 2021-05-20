#include "CloseEvent.h"
#include "IEventVisitor.h"

void CloseEvent::visit(IEventVisitor const& visitor) const
{
	visitor.visit(*this);
}
