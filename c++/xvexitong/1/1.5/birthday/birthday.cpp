#include<iostream>
#include<time.h>
#include<stdlib.h>
int main(){
    const int len = 100;const int times = 10000000;
    int r = 0.;
    srand(time(0));
    for(int i=0;i<times;i++){
        for(int m=0;m<len;m++){
            int bir[len];int temp = 0;
            bir[m] = rand()%365+1;
            for(int n=0;n<m;n++){
                if(bir[n] == bir[m])
                    temp = 1;
            }
            if(temp == 1){
                r++;
                break;
            }
        }
    }
    std::cout << double(r) << '/' << double(times) << '=' << double(r)/double(times);
}
