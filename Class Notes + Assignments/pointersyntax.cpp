/*


pointer = new type;
pointer = new type [number_of_elements];




double* pvalue = NULL;
pvalue = new double;

*pvalue = 23456.33;
cout << "Value of pvalue : " << *pvalue << endl;

delete pvalue;

return 0;

int i,n;
int *p;
cout <<"HOw many numbers would you like to type? ";
cin >> i;
p = new (nothrow) int[i];
if (p == nullptr)
    cout << "Error: memory could not be allocated";
else
{
    for (n==0; n < i; n++)
    {
        cout << "Enter number: ";
        cin >> p[n];
    }
    cout << "You have entered: ";
    for (n==0; n < i; n++)
        cout << p[n] << ", ";
    delete [] p;
}
return 0;






int max == 10;
int * a = new int [max];
int n = 0;

while (cin >> a[n])
{
    n++;
    if (n >= max)
    {
        max = max * 2;
        int* temp = new int[max];
        for (int i=0; i < n; i++);
            temp[i] = a[i];
        delete [] a;
        a = temp;
    }
}


*/
