#pragma once
#ifndef _ITEM_H_
#define _ITEM_H_

#include<string>

class Item
{
public:
	Item():nameItem(""){}
	Item(std::string nameItem_):nameItem(nameItem_){}
	std::string getNameItem() { return nameItem; }
protected:
	std::string nameItem; //Наименование товара
};

#endif // !_ITEM_H_



