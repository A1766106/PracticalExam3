#include "Bike_yard.h"
#include "Bike.h"
#include <string>
#include <iostream>

using namespace std;

Bike_yard::Bike_yard()
{
    capacity = 0;
    count = 0;
    Bikes_In_Stock = new Bike[capacity];
}                       
Bike_yard::Bike_yard(int capacity)
{
    this->capacity = capacity;
    count = 0;
    Bikes_In_Stock = new Bike[capacity];
} 

int Bike_yard::get_total_stock_count()
{
    return count;
}
int Bike_yard::get_stock_quantity(int code)
{   
    int Number_Of_Code = 0;
    for(int i=0;i<capacity;i++)
    {
        if(Bikes_In_Stock[i].get_code() == code)
        {
            Number_Of_Code++;
        }
    }
    return Number_Of_Code;
}

Bike *Bike_yard::get_current_stock_list()
{
    return Bikes_In_Stock;
}
bool Bike_yard::add_stock(Bike b)
{
    if(count != capacity)
    {
        Bikes_In_Stock[count] = b;
        count++;
        return true;
    }
    return false;
}  
Bike_yard::~Bike_yard(){};