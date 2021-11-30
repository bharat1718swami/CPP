#include<iostream>
using namespace std;
int main()
{
    int num,f0,f1,fibo;
    cout<<"enter a number\n";
    cin>>num;
    f0=0,f1=1;
    fibo=0;
    cout<<"fibonacci numbers btw 0 and num\n"<<f0<<endl<<f1<<endl;
    while (fibo<=num-f0)
    {
        fibo=f0+f1;
        cout<<fibo<<endl;
        f0=f1;
        f1=fibo;
    }
    return 0;
    
}