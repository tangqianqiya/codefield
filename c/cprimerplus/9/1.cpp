#include<stdio.h>
int main()
{
    char *p,s[6];
    int n;
    p=s;
    fgets(p,6,stdin);
    n=*p-'0';
    while(*(++p)!='\n')
        n=n*8+(*p-'0');
    printf("%d\n",n);
}
