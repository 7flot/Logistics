#pragma once
#ifndef _ITEMSAND_H_
#define _ITEMSAND_H_

#include"Item.h"

class ItemSand : public Item //Класс сыпучих товаров потомок от Item
{
public:
	ItemSand():Item(), price(0), weight(0){}
	ItemSand(std::string nameItem_, float price_, float weight_):
		Item(nameItem_), price(price_), weight(weight_){}
	
	float getWeight() { return weight; } //Метод возвращает количество сыпучих товаров в тоннах
	float getPrice() { return price; } //Метод возвращает цену сыпучих товаров за тонну

private:
	float price; //Цена за одну тонну
	float weight; //Общая масса сыпучего товара
};

#endif // !_ITEMSAND_H_



