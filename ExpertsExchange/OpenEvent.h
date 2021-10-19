#ifndef OPENEVENT_H
#define OPENEVENT_H

#include "IEvent.h"
#include <string>

class OpenEvent :
	public IEvent
{
private:
	std::string mColor;
public:
	OpenEvent();
	std::string getColor() const;
	OpenEvent(std::string const& color);
	bool hasColor() const;
	void visit(IEventVisitor const& visitor) const override;
};

#endif
