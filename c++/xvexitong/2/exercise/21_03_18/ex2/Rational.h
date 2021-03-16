#ifndef RATIONAL_H
#define RATIONAL_H
class Rational{
private:
    int m;
    int n;
public:
    Rational();
    Rational(int, int);
    inline bool setM(int);
    void setN(int);
    Rational R_add(const Rational& A);
    void R_sub(Rational & A, Rational &B);
    Rational R_mul(Rational & A);
    void R_div(Rational & A, Rational &B);
    void simple();
    void print();
};
#endif
