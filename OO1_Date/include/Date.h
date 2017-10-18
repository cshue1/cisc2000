//CHRISTINE SHUE
//SEPTEMBER 30, 2016

#ifndef DATE_H
#define DATE_H

//**************************************************************************************
// The class Date stores all of the variables and the functions that are related to    *
// storing the month, date and year.                                                   *
//**************************************************************************************
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date();
        Date(int, int, int);

        void printDay() const;

};

#endif // DATE_H
