#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    while (true)
    {
        for(int i=0;i<3;i++)
        {
            cout << "loaded";
            for(int m=i;m;m--)
                cout << '.';
            for(int n=2-i;n;n--)
                cout << " ";
            cout << '\r' << flush;
            sleep(1);
        }
    }
    return 0;
}
