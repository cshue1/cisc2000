// CHRISTINE SHUE
// OCTOBER 4, 2016


#ifndef COURSE_H
#define COURSE_H
#include <string>

//***********************************************************************
// the Course class saves all of the variables and functions related    *
// to storing and displaying course information                         *
//***********************************************************************

class Course
{
    private:
        std::string name;
        int courseID;
        int numCredits;
        std::string instructor;
        double grade;

    public:
        Course();
        Course(std::string,int,int,std::string,double);
        void printCourseInfo() const;
};

#endif // COURSE_H
