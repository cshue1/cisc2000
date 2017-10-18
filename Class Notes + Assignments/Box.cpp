#include <iostream>
using namespace std;

class Box
{
    private:
        int id;
    public:
    Box()
    {
        cout << "Constructor called" << endl;
    }
    Box(int i)
    {
        id = i;
        cout << "Constructor called for id " << i << endl;
    }
    ~Box()
    {
        cout << "Destructor called for id "<< id << endl;
    }
};


int main()
{
    Box * boxArrPtr;
    boxArrPtr = new Box[5];
    cout << "Done with declaration." << endl;

    cout << "Deleting boxArrPtr" << endl;
    delete [] boxArrPtr;
    cout << "Before return 0" << endl;
    return 0;
}
