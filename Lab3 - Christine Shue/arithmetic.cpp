//CHRISTINE SHUE
//SEPTEMBER 4, 2016
//2.19 ARITHMETIC

#include <iostream>

using namespace std;

int compute_smallest (int num1,int num2,int num3);
int compute_largest (int num1,int num2,int num3);

int main()
{
    const int NUM_OF_INT = 3;
    int num1 = 0,num2 = 0,num3 = 0,sum = 0,avg = 0,product = 0;
    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    avg = sum / NUM_OF_INT;
    product = num1 * num2 * num3;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    cout << "Product is " << product << endl;
    cout << "Smallest is " << compute_smallest (num1,num2,num3) << endl;
    cout << "Largest is " << compute_largest (num1,num2,num3) << endl;


    return 0;

}
int compute_smallest (int num1,int num2,int num3)
{
   if (num1 > num2)
   {
       if (num2 < num3)
       {
           return num2;
       }
       else return num3;
   }
   else
   {
       if (num1 > num3)
       {
           return num3;
       }
       else return num1;
   }
}

int compute_largest (int num1,int num2,int num3)
{
   if (num1 < num2)
   {
       if (num2 > num3)
       {
           return num2;
       }
       else return num3;
   }
   else
   {
       if (num1 < num3)
       {
           return num3;
       }
       else return num1;
   }
}
