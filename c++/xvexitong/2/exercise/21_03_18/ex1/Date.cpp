#include<iostream>
#include<iomanip>
#include"Date.h"
Date::Date():year(0),month(0),day(0){}
Date::Date(unsigned y, unsigned m, unsigned d):year(y),month(m),day(d){}
bool Date::Judge(unsigned y, unsigned m, unsigned d) 
{
    if(m <= 12 && m >= 1)
    { 
        switch(m)
        { 
            case 2:
                if(y/4==0&&y/100!=0||y/400==0)
                {
                    if(d<=29&&d>=1)
                        return true;
                    else
                    {
                        std::cout << "Invalid day." << std::endl;
                        return false;
                    }
                }
                else
                {
                    if(d<=28&&d>=1)
                        return true;
                    else
                    {
                        std::cout << "Invalid day." << std::endl;
                        return false;
                    }

                }
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                if(d<=31&&d>=1)
                    return true;
                else
                {
                    std::cout << "Invalid day." << std::endl;
                    return false;
                }
            case 4:case 6:case 9:case 11:
                if(d<=30&&d>=1)
                    return true;
                else
                {
                    std::cout << "Invalid day." << std::endl;
                    return false;
                }
        }
    }
    else
    {
        std::cout << "Invalid month." << std::endl;
        return false;
    }
    return false;
}
bool Date::set(unsigned y, unsigned m, unsigned d)
{
    if (Judge(y, m, d))
    {
        year = y;month = m;day = d;
        std::cout << "The new date is set successfully." << std::endl;
        return true;
    }
    else
    {
        std::cout << "Invalid date.";
        return false;
    }
}
void Date::Get_date()
{
    std::cout.fill('0');
    std::cout << std::setw(2) << month << '/' << std::setw(2) << day << '/' << std::setw(4) << year << std::endl;
}
unsigned Date::Get_day()
{
    register int sum = 0;
    for(register int i = month - 1;i > 0;i--)
    {
        switch(i)
        {
            case 2:
                if(year/4==0&&year/100!=0||year/400==0)
                {
                    sum += 29;
                    break;
                }
                else
                {
                    sum += 28;
                    break;
                }
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                sum += 31;
                break;
            case 4:case 6:case 9:case 11:
                sum += 30;
                break; 
            default: 
                break; 
        } 
    } 
    sum += day;
    std::cout << sum;
    return sum;
} 