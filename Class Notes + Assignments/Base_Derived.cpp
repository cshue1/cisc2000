#include<iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout<<"BaseClass constructor."<<endl;
    }
    ~BaseClass()
    {
        cout<<"BaseClass destructor."<<endl;
    }
};

class DerivedClass : BaseClass
{
public:
    DerivedClass()
    {
        cout<<"DerivedClass constructor."<<endl;
    }
    ~DerivedClass()
    {
        cout<<"DerivedClass destructor."<<endl;
    }

};

int main()
{
    cout<<"Will created a DerivedClass object."<<endl<<endl;

    DerivedClass object;

    cout<<"\nProgram ending."<<endl<<endl;

    return 0;
}
