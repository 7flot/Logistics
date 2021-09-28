#pragma once
#ifndef _IMEDIATOR_H_
#define _IMEDIATOR_H_

class IMediator //Интерфейс "паттерн посредник" между Car и Base
{
public:
	virtual void Overload() = 0; //Виртуальный метод вызова функции выгрузки сыпучих товаров
};

#endif // !_IMEDIATOR_H_



