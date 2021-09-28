#pragma once
#ifndef _CARTHING_H_
#define _CARTHING_H_
#include<vector>
#include "Car.h"
#include"ItemThing.h"

class CarThing : public Car //Класс бортовых грузовиков потомок от Car
{
public:
	CarThing() : Car() {}
	CarThing(std::string idCar_, std::vector<ItemThing> obj_) : Car(idCar_), obj{obj_} {}	
	std::vector<ItemThing> getCarList() { return this->obj; }
private:
	std::vector<ItemThing> obj; //Набор предметов тип ItemThing	
};

#endif // !_CARTHING_H_



