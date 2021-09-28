#pragma once
#ifndef _BASE_H_
#define _BASE_H_

#include<vector>
#include <string>
#include"ItemSand.h"
#include"ItemThing.h"
#include"IMediator.h"

class Base //����� ����� ������� � ������� �������
{
public:
	
	Base() : costSand(0), costThing{0}, weightSand(0) {}
	void setSand(const float sand_) { weightSand += sand_; } //����� ��������� �������� ���� weightSand
	void setPriceSand(const float price_) { costSand += price_; } //����� ��������� �������� ���� costSand
	void setPriceThing(const float price_) { costThing += price_; } //����� ��������� �������� ���� costSand
	void setListThing(const ItemThing obj); //����� ���������� ������ �� �����	

	float getWeightSand() { return weightSand; } //�������� ����� �����
	float getCostSand() { return costSand; }//�������� ��������� ��������� ������� ������� �� ������
	int getSizelistThing() { return listThing.size(); } //���������� ������� ������� �� ������
	float getCostThing() { return costThing; }

	void Outload(IMediator *obj) { obj->Overload(); } //����������� ����� ������ ������� �������� �������	

private:
	float costSand; //��������� ��������� ������� ������� �� ������
	float costThing; //��������� ��������� ������� ������� �� ������
	float weightSand; //��������� ���������� ������� ������� �� ������
	std::vector<ItemThing> listThing; //������ ������ ������� ������

};

#endif // !_BASE_H_



