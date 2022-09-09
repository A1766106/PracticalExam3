#include "Bike_yard.h"
#include "Bike.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Bike b1;
    Bike b2("Max", 123);
    Bike_yard by1(2);
    by1.add_stock(b1);
    by1.add_stock(b2);
    cout << by1.get_total_stock_count() << endl;

}