//CHRISTINE SHUE
//SEPTEMBER 4, 2016
//2.21 DIAMOND

#include <iostream>

using namespace std;

int print_outer_space (int outerSpaceTrack);
int print_inner_space (int innerSpaceTrack);

const int SIZE = 5; //SIZE must be an odd number

int main()
{

    int outerSpaceTrack = SIZE, innerSpaceTrack = 1, line = 1;

    do
    {
        if (line == 1)
        {
            print_outer_space (outerSpaceTrack);
            cout << "*" << endl;
        }
        else
        {
            print_outer_space (outerSpaceTrack);
            cout << "*";
            print_inner_space (innerSpaceTrack);
            innerSpaceTrack+=2;
            cout << "*" << endl;
        }
        outerSpaceTrack--;

        line++;
    }while (line <= SIZE);

    do
    {
        if (line == 1)
        {
            print_outer_space (outerSpaceTrack);
            cout << "*" << endl;
        }
        else
        {
            print_outer_space (outerSpaceTrack);
            cout << "*";
            print_inner_space (innerSpaceTrack);
            innerSpaceTrack-=2;
            cout << "*" << endl;
        }
        outerSpaceTrack++;
        line--;
    }while (line > 0);

    return 0;

}

int print_outer_space (int outerSpaceTrack)
{
    for (int n = 0; n < outerSpaceTrack; ++n)
        cout << " " ;
}
int print_inner_space (int innerSpaceTrack)
{
    for (int n = 0; n < innerSpaceTrack; ++n)
        cout << " " ;
}
