//CHRISTINE SHUE
//SEPTEMBER 16, 2016
//IO LAB


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    ifstream inFile;
    cout << fixed << showpoint << setprecision (3);
    float pop_1950 = 0.0, pop_1970 = 0.0, pop_1990 = 0.0, pop_2010 = 0.0, pop_2015 = 0.0;
    string name = " ";

    inFile.open("population.csv");
    if(inFile)
    {
        cout << setw(10) << "POP. in 1950\t" <<  setw(10) << "POP. in 2010 \t" << " COUNTRY" << endl << endl;
        do
        {
            if (name != " ")
                cout << setw(10) << pop_1950 << "\t" <<  setw(10) << pop_2015 << "\t" << name << endl;
            inFile >> pop_1950 >> pop_1970 >> pop_1990 >> pop_2010 >> pop_2015;

        }while (getline(inFile,name));
        inFile.close();
    }
    else
    {
        cout << "Error opening the file. \n";
    }


    return 0;

}
