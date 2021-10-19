#include "OpenEvent.h"
#include "IEventVisitor.h"

OpenEvent::OpenEvent():
	mColor{ std::string{} }
{
}

OpenEvent::OpenEvent(std::string const& color) :
	mColor{ color }
{
}

bool OpenEvent::hasColor() const
{
	return mColor != std::string{};
}

void OpenEvent::visit(IEventVisitor const& visitor) const
{
	visitor.visit(*this);
}

std::string OpenEvent::getColor() const
{
	return mColor;
}
