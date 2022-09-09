#include "Bike.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Bike b1;
    Bike b2("Max", 123);
    cout << b1.get_brand() << endl;
    cout << b1.get_code() << endl;

    return 0;
}