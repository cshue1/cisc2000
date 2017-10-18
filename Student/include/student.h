#ifndef STUDENT_H
#define STUDENT_H
#include <string>


class Student
{
    private:
        int studID;
        std::string firstName;
        std::string lastName;
        char middleInit;
        int dob;
        char gender;

    public:
        void setID(int);
        void setFirstName(std::string);
        void setLastName(std::string);
        void setMidInit(char);
        void setDOB(int,int,int);
        void setGender(char);

        int getID()const;
        std::string getFirstName()const;
        char getMidInit()const;
        std::string getLastName()const;
        int getDOB()const;
        char getGender()const;
};

#endif // STUDENT_H
