// CHRISTINE SHUE
// OCTOBER 4, 2016


#include "Course.h"
#include <iostream>

using namespace std;

//***********************************************************************************
// This program reads a user's course information, stores it in an object, and      *
// prints out the information.                                                      *
//***********************************************************************************

int main()
{
    Course defaultCourse;
    string name,instructor;
    int c_id, numCreds;;
    double grade;

    defaultCourse.printCourseInfo();

    cout << "What course did you take? ";
    getline(cin,name);
    cout << "what is " << name << "'s course ID number? ";
    cin >> c_id;
    cout << "How many credits is " << name << "? ";
    cin >> numCreds;
    cout << "Who taught the course? ";
    cin.ignore();
    getline(cin,instructor);
    cout << "What numerical grade did you receive in " << name << "? ";
    cin >> grade;

    Course myCourse(name,c_id,numCreds,instructor,grade);
    cout << "Here is your course information: " << endl;
    myCourse.printCourseInfo();

    return 0;
}
