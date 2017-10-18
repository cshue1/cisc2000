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
     void showID()
    {
        cout << "Id is " << id << endl;
    }
    ~Box()
    {
        cout << "Destructor called for id "<< id << endl;
    }
};


int main()
{
    Box box1(1);
    cout << "box1 ";
    box1.showID();

    Box box2(2);
    cout << "box2 ";
    box2.showID();

    box2=box1;
    cout << "box2 ";
    box2.showID();

    cout << "&box1 " << &box1 << endl;
    cout << "&box2 " << &box2 << endl;

    return 0;
}
