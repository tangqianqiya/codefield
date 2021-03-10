#include<iostream>
void swap1(char a, char b )
{   
    char t = 0;
    t=a; a=b; b=t;
}
void swap2(char *p, char *q)
{   
    char *t = nullptr;
    t=p; p=q; q=t;
}
void swap3(char* p, char *q)
{   
    char t;
    t=*p;*p=*q;*q=t;
}
void swap4(char * *p, char * *q)
{   
    char* t = nullptr;
    t=*p;*p=*q;*q=t;
} 
void swap5(char &p,char &q)
{
    char t;
    t=p;p=q;q=t;
}//交换字符数据
void swap6(char* &p,char* &q)
{
    char* t = nullptr;
    t=p;p=q;q=t;
}//交换指针
int main()
{
    char c1 = 'A', c2='B';
    char str1[]="Jackson", str2[]="Gates";
    char *p1 = str1, *p2 = str2;
    swap2(p1, p2);
    std::cout << p1 << "   " << p2 << std::endl;      
    swap3(p1, p2);    
    std::cout << p1 << "   " << p2 << std::endl;  
    p1 = "Gates";
    p2 = "Jackson";
    swap4(&p1,&p2);
    std::cout << p1 << "   " << p2 << std::endl;  
    swap5(c1,c2);
    std::cout << c1 << "   " << c2 << std::endl;  
    swap6(p1,p2);
    std::cout << p1 << "   " << p2 << std::endl;  
    return 0;
}
