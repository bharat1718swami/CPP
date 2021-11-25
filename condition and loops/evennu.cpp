#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter a number\n";
    cin>>num;
    i=1;
    while (num>=i)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}