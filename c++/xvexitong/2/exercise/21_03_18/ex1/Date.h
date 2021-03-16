#ifndef DATE_H
#define DATE_H
class Date
{
private:
    unsigned year, month, day;
public:
    Date();
    Date(unsigned, unsigned, unsigned);
    bool set(unsigned, unsigned, unsigned);
    void Get_date();
    unsigned Get_day();
    bool Judge(unsigned, unsigned, unsigned);
};
#endif
