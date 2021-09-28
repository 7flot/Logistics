#pragma once
#ifndef _ITEMSAND_H_
#define _ITEMSAND_H_

#include"Item.h"

class ItemSand : public Item //����� ������� ������� ������� �� Item
{
public:
	ItemSand():Item(), price(0), weight(0){}
	ItemSand(std::string nameItem_, float price_, float weight_):
		Item(nameItem_), price(price_), weight(weight_){}
	
	float getWeight() { return weight; } //����� ���������� ���������� ������� ������� � ������
	float getPrice() { return price; } //����� ���������� ���� ������� ������� �� �����

private:
	float price; //���� �� ���� �����
	float weight; //����� ����� �������� ������
};

#endif // !_ITEMSAND_H_



