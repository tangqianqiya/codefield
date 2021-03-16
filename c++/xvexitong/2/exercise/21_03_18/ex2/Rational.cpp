#include"Rational.h"
#include"Gcd.h"
#include<iostream>
Rational::Rational()
{
    m = 1;n = 1;
}
Rational::Rational(int mm, int nn)
{
    n = nn;
    if (mm != 0)
    {
        m = mm;
    }
    else
    {
        m = 1;
        std::cerr << "The denominator can't be 0,now it's initialized to 1." << std::endl;
    }
}
bool Rational::setM(int mm)
{
    if (mm != 0)
    {
        m = mm;
        return true;
    }
    else
    {
        m = 1;
        std::cerr << "The denominator can't be 0,now it's initialized to 1." << std::endl;
        return false;
    }
}
void Rational::setN(int nn)
{
    n = nn;
}
Rational Rational::R_add(const Rational& A)
{
    Rational T;
    T.m = A.m * m;
    T.n = A.n * m + n * A.m;
    T.simple();
    return T;
}
void Rational::R_sub(Rational & A, Rational & B)
{
    m = A.m * B.m;
    n = A.n * B.m - B.n * A.m;
    simple();
    print();
}
Rational Rational::R_mul(Rational & A)
{
    Rational T;
    T.m = A.m * m;
    T.n = A.n * n;
    T.simple();
    return T;
}
void Rational::R_div(Rational & A, Rational & B)
{
    Rational T;
    T.m = A.m * B.n;
    T.n = A.n * B.m;
    T.simple();
    T.print();
}
void Rational::simple()
{
    int t;
    t = gcd(m,n);
    m /= t;
    n /= t;
}
void Rational::print()
{
    std::cout << "m = " << m << ", n = " << n << ".\nThe value is " << n << '/' << m << std::endl;
}
