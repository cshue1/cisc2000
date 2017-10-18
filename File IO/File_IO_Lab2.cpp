// CHRISTINE SHUE
// SEPTEMBER  20, 2016
//FILE IO LAB_2

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAXCOUNTRIES = 229;

struct Country
{
    string name;
    double pop1950;
    double pop1970;
    double pop1990;
    double pop2010;
    double pop2015;
};
struct GrowthRate
{
    double rate50to70;
    double rate70to90;
    double rate90to10;
    double rate10to15;
    double average;

};
struct World
{
    int numCountries = 0;
    Country countries[MAXCOUNTRIES];
    GrowthRate growthrate[MAXCOUNTRIES];
}myWorld;

void readFile (World& myWorld);
void findLrgstPop (World myWorld, int& a, int& b, int& c);
void printLrgstPop (World myWorld, int a, int b, int c);
void popGrowthRate (World& myWorld);
void lgstGrowthRate (World myWorld, int& a, int& b, int& c, int& d);
void printLrgstGR (World myWorld, int a, int b, int c, int d);
void topCandidates (World myWorld, int lrgst3);

int main()
{
    int lrgst = 0, lrgst2 = 0, lrgst3 = 0, lgstGR50to70 = 0, lgstGR70to90 = 0, lgstGR90to10 = 0, lgstGR10to15 = 0;;

    cout << fixed << showpoint << setprecision(2) << endl;

    readFile(myWorld);

    findLrgstPop(myWorld, lrgst, lrgst2, lrgst3);

    printLrgstPop (myWorld, lrgst, lrgst2, lrgst3);

    popGrowthRate (myWorld);

    lgstGrowthRate (myWorld, lgstGR50to70, lgstGR70to90, lgstGR90to10, lgstGR10to15);

    printLrgstGR (myWorld, lgstGR50to70, lgstGR70to90, lgstGR90to10, lgstGR10to15);

    topCandidates(myWorld,lrgst3);

    return 0;

}

//Task 0
void readFile (World& myWorld)
{
    ifstream inFile;
    string junk = "";
    inFile.open("population.csv");
    if (!inFile)
        cout << "Error reading file" << endl;
    else
    {
        do
        {
            for(int count = 0; count < MAXCOUNTRIES; count++)
            {
                inFile >> myWorld.countries[count].pop1950 >> myWorld.countries[count].pop1970 >> myWorld.countries[count].pop1990
                    >> myWorld.countries[count].pop2010 >> myWorld.countries[count].pop2015;
                getline(inFile,myWorld.countries[count].name);
                myWorld.numCountries++;
            }
        }while(getline(inFile,junk));
        inFile.close();
    }
}

//Task 1
void findLrgstPop (World myWorld, int& a, int& b, int& c)
{

    cout << "Task 1: Find the countries with the 3 largest populations" << endl << endl;
    for (int count = 1; count < myWorld.numCountries; count ++)
    {
        if (myWorld.countries[c].pop2015 < myWorld.countries[count].pop2015)
            if (myWorld.countries[b].pop2015 < myWorld.countries[count].pop2015)
                if (myWorld.countries[a].pop2015 < myWorld.countries[count].pop2015)
                    a = count;
                else
                    b = count;
            else
                c = count;
    }
}
void printLrgstPop (World myWorld, int a, int b, int c)
{
    cout << "The country with the largest population is " << myWorld.countries[a].name << endl;
    cout << "\tPopulation: " << myWorld.countries[a].pop2015 << " thousand people" << endl;
    cout << "The country with the second largest population is " << myWorld.countries[b].name << endl;
    cout << "\tPopulation: " << myWorld.countries[b].pop2015 << " thousand people" << endl;
    cout << "The country with the third largest population is " << myWorld.countries[c].name << endl;
    cout << "\tPopulation: " << myWorld.countries[c].pop2015 << " thousand people" << endl << endl << endl;

}

void popGrowthRate (World& myWorld)
{
    for (int count = 0; count < myWorld.numCountries; count ++)
    {
        myWorld.growthrate[count].rate50to70 = (myWorld.countries[count].pop1970 - myWorld.countries[count].pop1950) / myWorld.countries[count].pop1950;
        myWorld.growthrate[count].rate70to90 = (myWorld.countries[count].pop1990 - myWorld.countries[count].pop1970) / myWorld.countries[count].pop1970;
        myWorld.growthrate[count].rate90to10 = (myWorld.countries[count].pop2010 - myWorld.countries[count].pop1990) / myWorld.countries[count].pop1990;
        myWorld.growthrate[count].rate10to15 = (myWorld.countries[count].pop2015 - myWorld.countries[count].pop2010) / myWorld.countries[count].pop2010;
        myWorld.growthrate[count].average = ((myWorld.growthrate[count].rate50to70 + myWorld.growthrate[count].rate70to90
            + myWorld.growthrate[count].rate90to10 + myWorld.growthrate[count].rate10to15)) / 4;
    }
}

//Task 2
void lgstGrowthRate (World myWorld, int& a, int& b, int& c, int& d)
{
    cout << "Task 2: Determine the fastest growth rate" << endl << endl;
    for (int count = 0; count < (myWorld.numCountries); count ++)
    {
        if(myWorld.growthrate[a].rate50to70 < myWorld.growthrate[count].rate50to70)
            a = count;
        if(myWorld.growthrate[b].rate70to90 < myWorld.growthrate[count].rate70to90)
            b = count;
        if(myWorld.growthrate[c].rate90to10 < myWorld.growthrate[count].rate90to10)
            c = count;
        if(myWorld.growthrate[d].rate10to15 < myWorld.growthrate[count].rate10to15)
            d = count;
    }
}

void printLrgstGR (World myWorld, int a, int b, int c, int d)
{
    cout << "The country with the largest growth rate from 1950 to 1970 is " << myWorld.countries[a].name
        << " with a growth rate of " << myWorld.growthrate[a].rate50to70 * 100 << "%" << endl;
    cout << "The country with the largest growth rate from 1970 to 1990 is " << myWorld.countries[b].name
        << " with a growth rate of " << myWorld.growthrate[b].rate70to90 * 100 << "%" << endl;
    cout << "The country with the largest growth rate from 1990 to 2010 is " << myWorld.countries[c].name
        << " with a growth rate of " << myWorld.growthrate[c].rate90to10 * 100 << "%" << endl;
    cout << "The country with the largest growth rate from 2010 to 2015 is " << myWorld.countries[d].name
        << " with a growth rate of " << myWorld.growthrate[d].rate10to15 * 100 << "%" << endl << endl << endl;
}

//Task 3
void topCandidates (World myWorld, int lrgst3)
{
    int listNum = 1;

    cout << "Task 3: Find the candidates that are most likely to become one of the 3 biggest countries in the future" << endl << endl;
    cout << "The third largest country currently is:" << myWorld.countries[lrgst3].name << endl;
    cout <<"\tCurrent population: " << myWorld.countries[lrgst3].pop2015 << " thousand people" << endl;
    cout << "\tAverage growth rate of from 1950 to 2015: "<< myWorld.growthrate[lrgst3].average * 100 << "%" << endl << endl;

    cout << "Qualifications to be a candidate: " << endl;
    cout << "\t1. A population of at least: " << float ( myWorld.countries[lrgst3].pop2015 * 0.25) << " thousand people" << endl;
    cout << "\t2. An average growth rate larger than " << myWorld.growthrate[lrgst3].average * 100 << "%" << endl << endl;

    cout << "The candidates to become one of the 3 biggest countries in the future \n(in no specific order) are: " << endl;
    for (int count = 0; count < myWorld.numCountries; count ++)
    {

        if (myWorld.countries[count].pop2015 >= .25 * myWorld.countries[lrgst3].pop2015)

            if (myWorld.growthrate[count].average > myWorld.growthrate[lrgst3].average)
            {
                cout << listNum <<"." << myWorld.countries[count].name
                    <<"\tCurrent population: " << myWorld.countries[count].pop2015 << "\tthousand people" << endl;
                cout << "\t\tAverage growth rate from 1950 to 2015: "<< myWorld.growthrate[count].average * 100 << "%" << endl << endl;
                listNum ++;
            }
    }
}



