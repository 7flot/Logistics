#pragma once
#ifndef _BASE_H_
#define _BASE_H_

#include<vector>
#include <string>
#include"ItemSand.h"
#include"ItemThing.h"
#include"IMediator.h"

class Base //Класс склад сыпучих и штучных товаров
{
public:
	
	Base() : costSand(0), costThing{0}, weightSand(0) {}
	void setSand(const float sand_) { weightSand += sand_; } //Метод получения значения поля weightSand
	void setPriceSand(const float price_) { costSand += price_; } //Метод получения значения поля costSand
	void setPriceThing(const float price_) { costThing += price_; } //Метод получения значения поля costSand
	void setListThing(const ItemThing obj); //Метод добавления товара на склад	

	float getWeightSand() { return weightSand; } //Возвщаем массу щебня
	float getCostSand() { return costSand; }//Возвщаем суммарную стоимость сыпучих товаров на складе
	int getSizelistThing() { return listThing.size(); } //Количество штучных товаров на складе
	float getCostThing() { return costThing; }

	void Outload(IMediator *obj) { obj->Overload(); } //Виртуальный метод вызова функции выгрузки товаров	

private:
	float costSand; //Суммарная стоимость сыпучих товаров на складе
	float costThing; //Суммарная стоимость штучных товаров на складе
	float weightSand; //Суммарное количество сыпучих товаров на складе
	std::vector<ItemThing> listThing; //Массив хранит хтучные товары

};

#endif // !_BASE_H_



