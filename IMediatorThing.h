#pragma once
#ifndef _IMEDIATORTHING_H_
#define _IMEDIATORTHING_H_

#include "IMediator.h"
#include"Base.h"
#include"CarThing.h"

class IMediatorThing : public IMediator
{
public:
	IMediatorThing() : car{ nullptr }, base{ nullptr } {}
	IMediatorThing(CarThing *car_, Base *base_) { car = car_; base = base_; } //����������� ��� ��������� �������� CarThing 
																			//� Base � ������ IMediatorThing obj	
	void Overload() override;
private:
	CarThing *car; //��������� � CarSand
	Base *base;	  //��������� � Base
};

#endif // !_IMEDIATORTHING_H_



