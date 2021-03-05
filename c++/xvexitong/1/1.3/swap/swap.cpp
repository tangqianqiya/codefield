#include<iostream>
void swap(int&,int&);
int main(){
    int a=3,b=4;
    std::cout << "a=" << a << " b="<< b << '\n';
    swap(a,b);
    std::cout << "a=" << a << " b="<< b;
    return 0;
}
void swap(int& x,int& y){
    int temp=x;
    x=y;
    y=temp;
}
