#include"IMediatorThing.h"

void IMediatorThing::Overload()
{
	for (size_t i = 0; i < car->getCarList().size(); i++)
	{
		base->setListThing(car->getCarList().at(i));
		base->setPriceThing(car->getCarList().at(i).getThingPrice());
	}
}