//CHRISTINE SHUE
//OCTOBER 25, 2016

#include <cmath>
#include <iostream>

using namespace std;


// To dynamically allocate an array, you need the keyword "NEW"

int main()
{

    // not dynamically allocated
    /*int * ptr;
    int arr [3] = {10,100,1000};

    ptr = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << ptr[i] << " ";
    }*/


    // dynamically allocated
    /*int * array = nullptr;
    array = new int[3];
    for (int i = 0; i < 3; i++)
    {
        array[i] = pow(10, i + 1);
        cout << array [i] << " ";
    }*/


    //array of ptr to elements of a dynamically created array
    int arr [3] = {10,100,1000};
    int * array[3];
    array = new int[3];
    for (int i = 0; i < 3; i++)
    {
        array[i] = &arr[i];
        cout << * arr[i] << " "
    }
    return 0;


}


