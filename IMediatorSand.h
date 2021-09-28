#pragma once
#ifndef _IMEDIATORSAND_H_
#define _IMEDIATORSAND_H_

#include "IMediator.h"
#include"Base.h"
#include"CarSand.h"

class IMediatorSand : public IMediator //���������� ���������� Car � Base ��� ������� �������
{
public:
	IMediatorSand():car{nullptr}, base{nullptr} {}
	IMediatorSand(CarSand *car_, Base *base_) { car = car_; base = base_; } //����������� ��� ��������� �������� CarSand 
	                                                                        //� Base � ������ IMediatorSand obj
	void setIMediatorSand(CarSand *car_, Base *base_) { this->car = car_; this->base = base_; }
	void Overload() override
	{
		base->setSand(car->getWeight()); //����������� ������� ���� �� car � base
		base->setPriceSand(car->getPrice()); //���������� � ��������� �������� ������ ��� Base
	}	
private:
	CarSand *car; //��������� � CarSand
	Base *base;	  //��������� � Base	
};

#endif // !_IMEDIATORSAND_H_




