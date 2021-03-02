#include<iostream>
int main()
{
    double max3(double a, double b=1.0, double c = 2.0);
    printf("%.2lf", max3(4.0));
    return 0;
}
double max3(double a, double b, double c)
{
    double max2(double a,double b);
    double max1;
    max1 = max2(a,b);
    return max2(max1,c);
}
double max2(double a, double b)
{
    return a>b?a:b;
}
