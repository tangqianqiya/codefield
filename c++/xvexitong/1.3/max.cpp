#include<iostream>
int main()
{
    double dmax(double a, double b=1.0, double c = 2.0);
    printf("%.2lf", dmax(4.0));
    return 0;
}
double dmax(double a, double b, double c)
{
    double dmax(double a,double b);
    double imax;
    imax = dmax(a,b);
    return dmax(imax,c);
}
double dmax(double a, double b)
{
    return a>b?a:b;
}
