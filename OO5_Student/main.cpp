// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

#include <iostream>
#include "Student.h"

using namespace std;

//*************************************
// Function main                      *
//*************************************

int main()
{
    char init, gender;
    int id, month, day, year;
    string firstName, lastName, campus, degree, major, minor;

    //TESTS DEFAULT CONSTRUCTOR
    Student test;
    cout << "==== DEFAULT ====" << endl;
    test.printStudent();

    //GET STUDENT INFORMATION FROM USER
    cout << "==== GET USER DATA ====" << endl;
    cout << "Please enter the student ID: ";
    cin >> id;
    cout << "Please enter the student's first name: ";
    cin >> firstName;
    cout << "Please enter the student's middle initial: ";
    cin >> init;
    cout << "Please enter the student's last name: ";
    cin >> lastName;
    cout << "Please enter the student's birth month (MM): ";
    cin >> month;
    cout << "Please enter the student's birth day (DD): ";
    cin >> day;
    cout << "Please enter the student's birth year (YYYY): ";
    cin >> year;
    cout <<"Please enter the student's gender (M or F): ";
    cin >> gender;
    cout << "Please enter the campus that the student goes to(RH|LC|WC): ";
    cin >> campus;
    cout << "Please enter the degree that the student is pursuing: ";
    cin >> degree;
    cout << "Please enter the student's intended major: ";
    cin.ignore();
    getline(cin,major);
    cout <<"Please enter the student's intended minor (\"none\" if none): ";
    getline(cin,minor);
    cout << endl << endl;

    //STORES USER INPUT IN STUDENT CLASS
    Student student(id, gender, firstName, lastName, init, month, day, year, campus, degree, major, minor);
    cout << "==== PRINTING STUDENT INFORMATION ====" << endl;

    //PRINT CONTENTS OF STUDENT CLASS
    student.printStudent();
    return 0;
}
