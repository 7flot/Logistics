#pragma once
#ifndef _IMEDIATORSAND_H_
#define _IMEDIATORSAND_H_

#include "IMediator.h"
#include"Base.h"
#include"CarSand.h"

class IMediatorSand : public IMediator //Реализация интерфейса Car и Base для сыпучих товаров
{
public:
	IMediatorSand():car{nullptr}, base{nullptr} {}
	IMediatorSand(CarSand *car_, Base *base_) { car = car_; base = base_; } //Конструктор для получения объектов CarSand 
	                                                                        //и Base в объект IMediatorSand obj
	void setIMediatorSand(CarSand *car_, Base *base_) { this->car = car_; this->base = base_; }
	void Overload() override
	{
		base->setSand(car->getWeight()); //Перегружаем сыпучий груз из car в base
		base->setPriceSand(car->getPrice()); //Информация о стоимости сыпучего товара для Base
	}	
private:
	CarSand *car; //Агрегация с CarSand
	Base *base;	  //Агрегация с Base	
};

#endif // !_IMEDIATORSAND_H_




