// CHRISTINE SHUE
// SEPTEMBER  20, 2016
//FILE IO LAB_2

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAXCOUNTRIES = 229; //FIGURE OUT HOW TO GET readFile TO PRODUCE THIS NUMBER

struct Country
{
    string name;
    double pop1950;
    double pop1970;
    double pop1990;
    double pop2010;
    double pop2015;
};
struct World
{
    int numCountries = 0;
    Country countries[MAXCOUNTRIES];
}myWorld;

void readFile (World& myWorld);
void findLrgstPop (World myWorld, int&lrgst, int&lrgst2, int&lrgst3);
void lgstGrowthRate (World myWorld, int&a, int&b, int&c, int&d);
void calcGrowthRate (World myWorld, int a, int b, int c, int d, float&w, float&x, float&y, float&z);
void topCandidates (World myWorld, int lrgst3);

int main()
{
    int lrgst = 0, lrgst2 = 0, lrgst3 = 0,lgstRate50to70 = 0, lgstRate70to90 = 0, lgstRate90to10 = 0, lgstRate10to15 = 0;
    float rate50to70, rate70to90, rate90to10, rate10to15;

    cout << fixed << showpoint << setw(8) << setprecision(3) << endl; //SUBJECT TO CHANGE

    readFile(myWorld);

    findLrgstPop(myWorld, lrgst, lrgst2, lrgst3);

    cout << "The country with the largest population is " << myWorld.countries[lrgst].name
    << " with a population of " << myWorld.countries[lrgst].pop2015 << " thousand people." << endl;
    cout << "The country with the second largest population is " << myWorld.countries[lrgst2].name
    << " with a population of " << myWorld.countries[lrgst2].pop2015 << " thousand people." << endl;
    cout << "The country with the third largest population is " << myWorld.countries[lrgst3].name
    << " with a population of " << myWorld.countries[lrgst3].pop2015 << " thousand people." << endl << endl << endl;

    lgstGrowthRate (myWorld, lgstRate50to70, lgstRate70to90, lgstRate90to10, lgstRate10to15);
    calcGrowthRate (myWorld, lgstRate50to70, lgstRate70to90, lgstRate90to10, lgstRate10to15, rate50to70, rate70to90, rate90to10, rate10to15);

    cout << "The country with the largest growth rate from 1950 to 1970 is " << myWorld.countries[lgstRate50to70].name
    << " with a growth rate of " << rate50to70 << endl;
    cout << "The country with the largest growth rate from 1970 to 1990 is " << myWorld.countries[lgstRate70to90].name
    << " with a growth rate of " << rate70to90 << endl;
    cout << "The country with the largest growth rate from 1990 to 2010 is " << myWorld.countries[lgstRate90to10].name
    << " with a growth rate of " << rate90to10 << endl;
    cout << "The country with the largest growth rate from 2010 to 2015 is " << myWorld.countries[lgstRate10to15].name
    << " with a growth rate of " << rate10to15 << endl << endl << endl;

    topCandidates(myWorld,lrgst3);

    return 0;

}

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
            }
        }while(getline(inFile,junk));
        inFile.close();
    }
}

void findLrgstPop (World, int&lrgst, int&lrgst2, int&lrgst3)
{
    cout << "Task 1: Find the countries with the 3 Largest Populations" << endl << endl;
    for (int count = 1; count < MAXCOUNTRIES; count ++)
    {
        if (myWorld.countries[lrgst3].pop2015 < myWorld.countries[count].pop2015)
            if (myWorld.countries[lrgst2].pop2015 < myWorld.countries[count].pop2015)
                if (myWorld.countries[lrgst].pop2015 < myWorld.countries[count].pop2015)
                    lrgst = count;
                else
                    lrgst2 = count;
            else
                lrgst3 = count;
    }
}

void lgstGrowthRate (World, int&a, int&b, int&c, int&d)
{
    cout << "Task 2: Determine the fastest growth rate" << endl << endl;
    for (int count = 1; count < (MAXCOUNTRIES); count ++)
    {
        if((myWorld.countries[a].pop1970 - myWorld.countries[a].pop1950)  < (myWorld.countries[count].pop1970  - myWorld.countries[count].pop1950 ))
            a = count;
        if((myWorld.countries[b].pop1990 - myWorld.countries[b].pop1970 ) < (myWorld.countries[count].pop1990  - myWorld.countries[count].pop1970 ))
            b= count;
        if((myWorld.countries[c].pop2010 - myWorld.countries[c].pop1990) < (myWorld.countries[count].pop2010  - myWorld.countries[count].pop1990 ))
            a = count;
        if((myWorld.countries[c].pop2015 - myWorld.countries[c].pop2010) < (myWorld.countries[count].pop2015  - myWorld.countries[count].pop2010 ))
            a = count;
    }
}

void calcGrowthRate (World, int a, int b, int c, int d, float&w, float&x, float&y, float&z)
{
    w = (myWorld.countries[a].pop1970 - myWorld.countries[a].pop1950) / myWorld.countries[a].pop1950;
    x = (myWorld.countries[b].pop1990 - myWorld.countries[b].pop1970) / myWorld.countries[b].pop1970;
    y = (myWorld.countries[c].pop2010 - myWorld.countries[c].pop1990) / myWorld.countries[c].pop1990;
    z = (myWorld.countries[d].pop2015 - myWorld.countries[d].pop2010) / myWorld.countries[d].pop2010;
}

void topCandidates (World myWorld, int lrgst3)
{
    int listNum = 1;
    float overallGR;
    float lrgst3GR = (myWorld.countries[lrgst3].pop2015 - myWorld.countries[lrgst3].pop1950) / myWorld.countries[lrgst3].pop1950;

    cout << "Task 3: Candidates to become one of the 3 biggest countries in the future" << endl << endl;
    cout << myWorld.countries[lrgst3].name << "'s overall growth rate from 1950 to 2015: " <<lrgst3GR << endl << endl;

    cout << "The candidates to become one of the 3 biggest countries in the future are: " << endl;
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        overallGR = (myWorld.countries[count].pop2015 - myWorld.countries[count].pop1950) / myWorld.countries[count].pop1950;

        if (myWorld.countries[count].pop2015 >= .25 * myWorld.countries[lrgst3].pop2015)

            if (overallGR > lrgst3GR)
            {
                cout << listNum <<"." << myWorld.countries[count].name << "\t with an overall growth rate of " << overallGR << " from 1950 to 2015" << endl;
                listNum ++;
            }
    }
}



