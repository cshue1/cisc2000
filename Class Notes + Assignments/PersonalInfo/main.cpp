#include <iostream>
#include "PersonInfo.h"

using namespace std;

int main()
{
    PersonalInfo person1("Maria Jones-Tucker", 25);
    cout << person1.getName() << " " << person1.getAge() << endl;

    PersonalInfo person2 = person1;
    cout << person2.getName() << " " << person.getAge() << endl;

    cout << "&person1= " << &person1 << endl;
    cout << "&person2= " << &person2 << endl;
    person2.steName("Sue Smith");
    cout << person1.getName() << " " << person1.getAge() << endl;
    cout << person2.getName() << " " << person.getAge() << endl;

    return 0;

}
