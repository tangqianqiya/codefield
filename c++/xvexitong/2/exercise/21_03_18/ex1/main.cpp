#include"Date.h"
#include<iostream>
int main()
{
    Date valid_day, invalid_day;
    valid_day.set(2021, 3, 15);
    valid_day.Get_date();
    valid_day.Get_day();
    std::cout << "\n---------------------" << std::endl;
    invalid_day.set(2021, 2, 29);
    invalid_day.Get_date();
    invalid_day.Get_day();
    return 0;
}
