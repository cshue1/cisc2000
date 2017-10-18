// CHRISTINE SHUE
// OCTOBER 11, 2016

#include <iostream>

using namespace std;

int main()
{
    int numOfIDs, findID, found = 0;
    int *idNum = nullptr;

    cout << "Please input the number of id numbers to be read" << endl;
    cin >> numOfIDs;

    idNum = new int[numOfIDs];

    for (int i = 0; i < numOfIDs; i++)
    {
        cout << "Please enter an id number" << endl;
        cin >> idNum[i];
    }
    cout << "Please input an id number to be searched" << endl;
    cin >> findID;
    for (int i = 0; i < numOfIDs; i++)
    {
        if (idNum[i] == findID)
        {
            found++;
        }
    }
    if (found > 0)
        cout << findID << " is in the array." << endl;
    else
        cout << findID << " is not in the array." << endl;

    return 0;

}
