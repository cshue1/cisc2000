#include <iostream>
using namespace std;

class Box
{
    private:
        int id;
        static int count;
    public:
    static boid showCount()
    {
        cout << "Count is " << count << endl;
    }
    Box()
    {
        cout << "Constructor called for id " << id << endl;
    }
    Box(int i)
    {
        id = i;
        cout << "Constructor called for id " << id << endl;
    }
    ~Box()
    {
        cout << "Destructor called for id "<< id << endl;
    }
};


int main()
{

    Box **boxArrPtr = new Box*[5];
    Box box0(0);
    Box box1(1);
    Box box2(2);
    boxArrPtr[0] =&box0;
    boxArrPtr[1] =&box1;
    boxArrPtr[2] =&box2;

    cout << "Done with declaration." << endl;

    cout << "Deleting boxArrPtr" << endl;
    delete boxArrPtr[1];
    cout << endl << endl;
    delete [] boxArrPtr;
    cout << "Before return 0" << endl;
    return 0;
}
