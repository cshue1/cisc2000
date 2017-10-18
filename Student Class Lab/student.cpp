// CHRISTINE SHUE
// DUE: SEPTEMBER 30, 2016
// OO Student Lab

#include <iostream>
#include <cstdlib>
using namespace std;

//**************************************************************************************
// The class Student stores all of the variables and the functions that are related to *
// storing student information.                                                        *
//**************************************************************************************

class Student
{
    private:
        int studID;
        string firstName;
        string lastName;
        char middleInit;
        int dob;
        char gender;

    public:
        void setID(int);
        void setFirstName(string);
        void setLastName(string);
        void setMidInit(char);
        void setDOB(int,int,int);
        void setGender(char);

        int getID()const;
        string getFirstName()const;
        char getMidInit()const;
        string getLastName()const;
        int getDOB()const;
        char getGender()const;
};

//*********************************************
// setID stores a value to the studID member. *
//*********************************************
void Student::setID(int id)
{
    studID = id;
}

//*******************************************************
// setFirstName stores a value to the firstName member. *
//*******************************************************
void Student::setFirstName(string fn)
{
    firstName = fn;
}

//*****************************************************
// setLastName stores a value to the lastName member. *
//*****************************************************
void Student::setLastName(string ln)
{
    lastName = ln;
}

//******************************************************
// setMidInit stores a value to the middleInit member. *
//******************************************************
void Student::setMidInit(char mi)
{
    middleInit = mi;
}

//*********************************************
// setDOB stores a value to the dob member.   *
//*********************************************
void Student::setDOB(int m, int d, int y)
{
    dob = m * 1000000 + d * 10000 + y;
}

//*************************************************
// setGender stores a value to the gender member. *
//*************************************************
void Student::setGender(char g)
{
    gender = g;
}

//************************************************
// getID returns the value in the studID member. *
//************************************************
int  Student::getID()const
{
    return studID;
}

//**********************************************************
// getFirstName returns the value in the firstName member. *
//**********************************************************
string  Student::getFirstName()const
{
    return firstName;
}

//*********************************************************
// getMidInit returns the value in the middleInit member. *
//*********************************************************
char  Student::getMidInit()const
{
    return middleInit;
}

//********************************************************
// getLastName returns the value in the lastName member. *
//********************************************************
string  Student::getLastName()const
{
    return lastName;
}

//**********************************************
// getDOB returns the value in the dob member. *
//**********************************************
int  Student::getDOB()const
{
    return dob;
}

//****************************************************
// getGender returns the value in the gender member. *
//****************************************************
char  Student::getGender()const
{
    return gender;
}

//*************************************
// Function main                      *
//*************************************
int main()
{
    Student test;
    char init, gender;
    int id, month, day, year;
    string firstName, lastName;

    //GET STUDENT INFORMATION FROM USER
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

    //STORE STUDENT INFORMATION
    test.setID(id);
    test.setFirstName(firstName);
    test.setMidInit(init);
    test.setLastName(lastName);
    test.setDOB(month,day,year);
    test.setGender(gender);

    //DISPLAY  STUDENT INFORMATION
    cout << "\n\n\nHere is the student's data:\n";
    cout << "Student ID: " << test.getID() << endl;
    cout << "Name: " << test.getFirstName() << " " << test.getMidInit() << ". " << test.getLastName() << endl;
    cout << "Date of Birth: " << test.getDOB() << endl;
    cout << "Gender: " << test.getGender() << endl;

}
