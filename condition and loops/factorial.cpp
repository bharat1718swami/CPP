#include<iostream>
using namespace std;
int main()
{
    int a,i,fact;
    cout<<"enter a no. for which you need factorial\n";
    cin>>a;
    i=1;
    fact=1;
    while (a>=i)
    {
        fact=i*fact;
        i++;
    }
    cout<<"factorial of "<<a<<"  is = "<<fact;
    return 0;
}