#ifndef PERSONINFO_H
#define PERSONINFO_H


class PersonInfo
{
    public:
        PersonInfo(char *n, int a);
        PersonInfo(PersonInfo &obj);
        ~PersonInfo();
    private:
        char *name;
        int age;
};

#endif // PERSONINFO_H
