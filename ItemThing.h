#pragma once
#ifndef _ITEMTHING_H_
#define _ITEMTHING_H_

#include<iostream>
#include "Item.h"

class ItemThing : public Item //����� ������� ������� ������� �� Item
{
public:
	ItemThing() :Item(), price{ 0 }, length{ 0 }, height{ 0 }, width{0} {}
	ItemThing(std::string nameItem_, float price_, int length_ = 0, int height_ = 0, int width_ = 0):
		Item(nameItem_), price{ price_ }, length{ length_ }, height{ height_ }, width{ width_ } {}
	float getThingPrice() { return price; }
	/*void getItemThing()
	{
		std::cout << this->nameItem << "  " << this->price << std::endl;
	}*/

private:
	float price; //���� �� �������
	int length; //������
	int height; //������
	int width; //������
};

#endif // !_ITEMTHING_H_



