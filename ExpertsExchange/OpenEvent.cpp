#include "OpenEvent.h"
#include "IEventVisitor.h"

void OpenEvent::visit(IEventVisitor const& visitor) const
{
	visitor.visit(*this);
}
