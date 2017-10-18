//CHRISTINE SHUE
//SEPTEMBER 16, 2016
//IO LAB


#include <iostream>
#include <fstream>
#include <string>
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

void createFile (World);
void createFile1 (World);
void createFile2 (World);
void createFile3 (World);
void createFile4 (World);
void createFile5 (World);
void swap (float& a, float& b);
void swap (string&a, string&b);

int main()
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
            for (int count = 0; count < MAXCOUNTRIES; count++)
            {
                inFile >> myWorld.countries[count].pop1950 >> myWorld.countries[count].pop1970 >> myWorld.countries[count].pop1990
                    >> myWorld.countries[count].pop2010 >> myWorld.countries[count].pop2015;
                getline(inFile,myWorld.countries[count].name);
            }
        }while(getline(inFile,junk));
    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        myWorld.growthrate[count].rate50to70 = (myWorld.countries[count].pop1970 - myWorld.countries[count].pop1950) / myWorld.countries[count].pop1950;
        myWorld.growthrate[count].rate70to90 = (myWorld.countries[count].pop1990 - myWorld.countries[count].pop1970) / myWorld.countries[count].pop1970;
        myWorld.growthrate[count].rate90to10 = (myWorld.countries[count].pop2010 - myWorld.countries[count].pop1990) / myWorld.countries[count].pop1990;
        myWorld.growthrate[count].rate10to15 = (myWorld.countries[count].pop2015 - myWorld.countries[count].pop2010) / myWorld.countries[count].pop2010;
        myWorld.growthrate[count].average = (myWorld.growthrate[count].rate50to70 + myWorld.growthrate[count].rate70to90
            + myWorld.growthrate[count].rate90to10 + myWorld.growthrate[count].rate10to15)/4;
    }
    cout << endl << endl << endl;
    createFile (myWorld);
    createFile1 (myWorld);
    createFile2 (myWorld);
    createFile3 (myWorld);
    createFile4 (myWorld);
    createFile5 (myWorld);

}

void createFile (World)
{
    ofstream outFile;

    outFile.open("Population Table.txt");

    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        outFile << myWorld.countries[count].pop1950 << "\t" << myWorld.countries[count].pop1970 << "\t" << myWorld.countries[count].pop1990
            << "\t" << myWorld.countries[count].pop2010 << "\t" << myWorld.countries[count].pop2015 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();
    outFile.open("Ordered 2015 Populations.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.countries[i].pop2015 < myWorld.countries[count].pop2015 )
            {
                swap( myWorld.countries[i].pop2015 , myWorld.countries[count].pop2015 );
                swap( myWorld.countries[i].name , myWorld.countries[count].name );
            }
        }

    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        outFile << myWorld.countries[count].pop2015 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();
}
void createFile1 (World)
{
    ofstream outFile;

    outFile.open("Ordered GR50to70.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.growthrate[i].rate50to70 < myWorld.growthrate[count].rate50to70 )
            {
                swap( myWorld.growthrate[i].rate50to70 , myWorld.growthrate[count].rate50to70 );
                swap( myWorld.countries[i].name , myWorld.countries[count].name );
            }
        }
    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        outFile << myWorld.growthrate[count].rate50to70 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();

}
void createFile2 (World)
{
    ofstream outFile;

    outFile.open("Ordered GR70to90.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.growthrate[i].rate70to90 < myWorld.growthrate[count].rate70to90 )
            {
                swap( myWorld.growthrate[i].rate70to90 , myWorld.growthrate[count].rate70to90 );

            }
        }

    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        cout << myWorld.growthrate[count].rate70to90 << "\t" << myWorld.countries[count].name << endl;
        outFile << myWorld.growthrate[count].rate70to90 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();

}
void createFile3 (World)
{
    ofstream outFile;

    outFile.open("Ordered GR90to10.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.growthrate[i].rate90to10 < myWorld.growthrate[count].rate90to10 )
            {
                swap( myWorld.growthrate[i].rate90to10 , myWorld.growthrate[count].rate90to10 );
                swap( myWorld.countries[i].name , myWorld.countries[count].name );
            }
        }
    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        outFile << myWorld.growthrate[count].rate90to10 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();

}
void createFile4 (World)
{
    ofstream outFile;

    outFile.open("Ordered GR10to15.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.growthrate[i].rate10to15 < myWorld.growthrate[count].rate10to15 )
            {
                swap( myWorld.growthrate[i].rate10to15 , myWorld.growthrate[count].rate10to15 );
                swap( myWorld.countries[i].name , myWorld.countries[count].name );
            }
        }
    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        outFile << myWorld.growthrate[count].rate10to15 << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();

}
void createFile5 (World)
{
    ofstream outFile;

    outFile.open("Ordered AvgGR.txt");
    for (int count = 0; count < MAXCOUNTRIES; count++)
    {
        for (int i = 0; i < count; i ++)
        {
            if ( myWorld.growthrate[i].average < myWorld.growthrate[count].average )
            {
                swap( myWorld.growthrate[i].average , myWorld.growthrate[count].average );
                swap( myWorld.countries[i].name , myWorld.countries[count].name );
            }
        }
    }
    for (int count = 0; count < MAXCOUNTRIES; count ++)
    {
        outFile << myWorld.growthrate[count].average << "\t" << myWorld.countries[count].name << endl;
    }
    outFile.close();

}
void swap (float& a, float& b)
{
    float temp;
    temp = a;
    a= b;
    b = temp;
}
void swap (string& a, string& b)
{
    string temp;
    temp = a;
    a= b;
    b = temp;
}

