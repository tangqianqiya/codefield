#include<iostream>
using namespace std;
class circle
{
    double radius;
    const double pi=3.14;
public:
    void set_radius(double r)
    {
        radius = r;
    }
    double get_girth()
    {
        return radius*2*pi;
    }
    double get_area()
    {
        return radius*radius*pi;
    }
};
int main()
{
    circle c;
    c.set_radius(1);
    cout<<c.get_girth()<<'\n';
    cout<<c.get_area();
    return 0;
}
