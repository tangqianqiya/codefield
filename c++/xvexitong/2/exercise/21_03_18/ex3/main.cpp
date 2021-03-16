#include"Stu.h"
int main()
{
    char a[] = "Coco" , b[] = "Haro";
    Stu stu1,stu2(202241401, a);
    stu2.show();
    stu1.show();
    stu1.setName(b);
    stu1.show();
    return 0;
}
