//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

//*********************************************************************
// class Date saves all of the variables and functions related        *
// to storing and displaying Date information                         *
//*********************************************************************

#ifndef DATE_H
#define DATE_H

class Date
{
    private:
        int month;
        int day;
        int year;

    public:
        Date();
        void setDate(int m, int d, int y);
        void printDate() const;
};

#endif // DATE_H
