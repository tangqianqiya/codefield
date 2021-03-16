#include"Rational.h"
int main()
{
    Rational a(2,1), b(2,1), c(1,1), d(2,1);
    Rational demo(), invalid_demo(0,0);
    invalid_demo.setM(0);
    a = a.R_add(b);
    b.R_sub(a, b);
    c.print();
    c = c.R_mul(d);
    c.print();
    d.R_div(d,c);
    return 0;
}
