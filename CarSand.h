#pragma once
#ifndef _CARSAND_H_
#define _CARSAND_H_

#include"ItemSand.h"
#include"Car.h"

class CarSand : public Car //Класс самосвалов потомок от Car
{
public:
	CarSand() :Car(), obj(nullptr) {} //Конструктор по умолчанию
	CarSand(std::string idCar_, ItemSand *obj_):Car(idCar_), obj(obj_) {} //Конструктор с параметрами	
	float getWeight(){ return this->obj->getWeight(); } //Геттер возвращает массу сыпучего груза
	float getPrice() { return (this->obj->getPrice()) * (this->obj->getWeight()); } //Метод возвращает стоимость
	                                                                                //всего полученного сыпучего товара
private:
	ItemSand *obj; //Поле объект сыпучего товара
};

#endif // !_CARSAND_H_



