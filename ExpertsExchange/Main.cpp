#include "Door.h"
#include "Light.h"

int main()
{
	Door door;
	Light light;
	door.subscribe(&light);
	door.open();
	door.close();
	door.unSubscribe(&light);
}