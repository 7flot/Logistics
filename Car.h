#pragma once
#ifndef _CAR_H_
#define _CAR_H_

#include<string>

class Car //������������ ����� ����������
{
public:
	Car() :idCar("") {}
	Car(std::string idCar_):idCar(idCar_) {}	
protected:
	std::string idCar; //����� ����������
};

#endif // !_CAR_H_



