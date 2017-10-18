// CHRISTINE SHUE
// OCTOBER 4, 2016


#include "Course.h"
#include <iostream>

using namespace std;
//********************************************************
// Course is a default constructor                       *
//********************************************************

Course::Course()
{
    name = "COURSE NAME";
    courseID = 0000;
    numCredits = 0;
    instructor = "INSTRUCTOR";
    grade = 100;
}

//********************************************************
// Course is an initializing constructor                 *
//********************************************************

Course::Course(std::string c,int c_id,int nc,std::string inst,double g)
{
    name = c;
    courseID = c_id;
    numCredits = nc;
    instructor = inst;
    grade = g;
}

//*******************************************************
// void printCourseInfo() prints course information     *
//*******************************************************

void Course::printCourseInfo() const
{
    cout << endl;
    cout << "COURSE NAME:\t" << name << endl;
    cout << "COURSE ID:\t" << courseID << endl;
    cout << "CREDITS:\t" << numCredits << endl;
    cout << "INSTRUCTOR:\t" << instructor << endl;
    cout << "GRADE:\t\t";
    if (grade <= 100 && grade > 89.4)
        cout << "A" << endl;
    else if (grade <= 89.4 && grade > 79.4)
        cout << "B" << endl;
    else if (grade <= 79.4 && grade > 69.4)
        cout << "C" << endl;
    else if (grade <= 69.4 && grade > 59.4)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    cout << endl << endl;
}
