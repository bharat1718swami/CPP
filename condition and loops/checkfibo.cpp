#include<iostream>
using namespace std;
int main()
{
    int num,fibo,f0,f1;
    cout<<"enter a number\n";
    cin>>num;
    f0=0,f1=1,fibo=0;
    while (fibo<num)
    {
        fibo=f0+f1;
        f0=f1;
        f1=fibo;
    }
    if(fibo==num)
    cout<<num<<"  is lies in fibonacci series";
    else
    cout<<num<<"  is not lies in fibonacci series";
    return 0;
}