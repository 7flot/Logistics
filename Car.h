#pragma once
#ifndef _CAR_H_
#define _CAR_H_

#include<string>

class Car //Родительский класс транспорта
{
public:
	Car() :idCar("") {}
	Car(std::string idCar_):idCar(idCar_) {}	
protected:
	std::string idCar; //Номер автомобиля
};

#endif // !_CAR_H_



