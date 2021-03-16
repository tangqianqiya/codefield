#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<cmath>
class Point 
{
public:
    double distance(Point&);
    void set_point();
private:
    double x,y,z;
};
inline double Point::distance(Point& p)
{
    double dis{0.0};
    dis = std::sqrt(std::pow((p.x - x), 2) + std::pow((p.y - y), 2) + std::pow((p.z - z), 2));
    std::cout << dis;
    return dis;
}
inline void Point::set_point()
{
    double i, m, n;
    std::cout << "Input x,y,z:" << std::endl;
    std::cin >> i >> m >> n;
    x = i; y = m; z = n;
}
#endif
