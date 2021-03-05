#include<iostream>
int main()
{
    idouble max(double a, double b=1.0, double c = 2.0);
    std::cout<<max(4.0);
    return 0;
}
double max(double a, double b, double c)
{
    double max(double a,double b);
    double dmax;
    dmax = max(a,b);
    return max(dmax,c);
}
double max(double a, double b)
{
    return a>b?a:b;
}
