#pragma once
#ifndef _CARSAND_H_
#define _CARSAND_H_

#include"ItemSand.h"
#include"Car.h"

class CarSand : public Car //����� ���������� ������� �� Car
{
public:
	CarSand() :Car(), obj(nullptr) {} //����������� �� ���������
	CarSand(std::string idCar_, ItemSand *obj_):Car(idCar_), obj(obj_) {} //����������� � �����������	
	float getWeight(){ return this->obj->getWeight(); } //������ ���������� ����� �������� �����
	float getPrice() { return (this->obj->getPrice()) * (this->obj->getWeight()); } //����� ���������� ���������
	                                                                                //����� ����������� �������� ������
private:
	ItemSand *obj; //���� ������ �������� ������
};

#endif // !_CARSAND_H_



