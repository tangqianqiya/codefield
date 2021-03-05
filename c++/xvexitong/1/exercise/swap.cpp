#include<iostream>
const int len = 10;
void swap1(char* p, char* q){
    char t;
    for(int i=0;i < len;i++){
        t = *(p+i); *(p+i) = *(q+i); *(q+i) = t;
    }
}
int main(){
    char str1[len] = "Jackson", str2[len] = "Gates";
    char* p1 = str1, * p2 = str2;
    std::cout << p1 << "  " << p2 << '\n';
    swap1(p1, p2);
    std::cout << p1 << "  " << p2;
    return 0;
}
