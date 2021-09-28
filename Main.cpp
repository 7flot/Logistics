/*

<<<<<<< HEAD
Изменение в файле Main в branch master
*/

=======
Изменение в файле Main в branch upgrade

*/
>>>>>>> upgrade
#include<vector>
#include"IMediator.h"
#include"Base.h"
#include"Car.h"
#include"CarSand.h"
#include"CarThing.h"
#include"IMediatorSand.h"
#include"IMediatorThing.h"
#include"Item.h"
#include"ItemSand.h"
#include"ItemThing.h"
#include"Revisionr.h"

int main()
{    
    setlocale(LC_ALL, "Rus");

    std::vector<ItemSand> item1{ {"Щебень", 10, 100} ,{"Щебень", 12, 110} ,{"Щебень", 9, 150} };

    std::vector<ItemThing> item2{ {"Телевизор", 10000}, {"Холодильник", 20000}, {"Пылесос", 3000}, 
                                  {"Холодильник", 30000}, {"Пылесос", 5000}, {"Телевизор", 15000} };

    CarSand carSand1("X 001 XX", &item1.at(0));
    CarSand carSand2("X 002 XX", &item1.at(1));
    CarSand carSand3("X 003 XX", &item1.at(2));

    CarThing carThing4("X 004 XX", item2);

    Base base;    
   
    IMediatorSand obj1(&carSand1, &base);
    base.Outload(&obj1);

    obj1.setIMediatorSand(&carSand2, &base);
    base.Outload(&obj1);

    obj1.setIMediatorSand(&carSand3, &base);
    base.Outload(&obj1);
    
    IMediatorThing obj2(&carThing4, &base);  
    base.Outload(&obj2);

    Revision(&base);

    return 0;
}

