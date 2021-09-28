#pragma once
#ifndef _REVISION_H_
#define _REVISION_H_

#include<iomanip>
#include"Base.h"

void Revision(Base *base_)
{
	std::cout.fill(' ');
	std::cout << std::setw(30) << std::left << "�������� �����: " << base_->getWeightSand() << " ���� " << std::endl
		<< std::setw(30) << std::left << "�� �����: " << base_->getCostSand() << " ������" << std::endl;
	std::cout << std::setw(30) << std::left << "�������� ������� �������: " << base_->getSizelistThing() 
		<< " ���� " << std::endl << std::setw(30) << std::left << "�� �����: " << base_->getCostThing() << " ������" << std::endl;

}

#endif // !_REVISION_H_


