#ifndef STU_H
#define STU_H
class Stu{
private:
    int id;
    char name[20];
public:
    Stu();
    Stu(int, char*);
    void show();
    void setName(char*);
};
#endif
