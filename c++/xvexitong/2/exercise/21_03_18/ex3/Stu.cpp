#include<iostream>
#include"Stu.h"
#include<string.h>
Stu::Stu()
{
    id = 202241001;
    strcpy(name,"ssdut");
}
Stu::Stu(int n,char* m)
{
    id = n;
    strcpy(name,m);
}
void Stu::show()
{
    std::cout << "Id is " << id << '\n'
        << "Name is " << name << std::endl;
}
void Stu::setName(char* m)
{
    strcpy(name,m);
}
