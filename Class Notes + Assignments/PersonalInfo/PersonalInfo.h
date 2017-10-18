#ifndef PERSONALINFO_H
#define PERSONALINFO_H


class PersonalInfo
{
    private:
        char *name;
        int age;

    public:
        PersonalInfo();
        PersonalInfo(char *n, int a);
        PersonalInfo(PersonalInfo &obj);
        ~PersonalInfo();
        const char *getName();
        int getAge();

};

#endif // PERSONALINFO_H
