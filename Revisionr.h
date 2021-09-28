#pragma once
#ifndef _REVISION_H_
#define _REVISION_H_

#include<iomanip>
#include"Base.h"

void Revision(Base *base_)
{
	std::cout.fill(' ');
	std::cout << std::setw(30) << std::left << "Получено шебня: " << base_->getWeightSand() << " тонн " << std::endl
		<< std::setw(30) << std::left << "На сумму: " << base_->getCostSand() << " рублей" << std::endl;
	std::cout << std::setw(30) << std::left << "Получено штучных товаров: " << base_->getSizelistThing() 
		<< " штук " << std::endl << std::setw(30) << std::left << "На сумму: " << base_->getCostThing() << " рублей" << std::endl;

}

#endif // !_REVISION_H_


