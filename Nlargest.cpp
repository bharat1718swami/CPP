#include<iostream>
using namespace std;
int main()
{
    int N,max,i,num;
    cout<<"enter how many numbers you compare\n";
    cin>>N;
    if(N==0)
    {
        cout<<"okk fine\n";
    }
    else
    {
        cout<<"enter number 1\t";
        cin>>max;
        i=2;
        while (i<=N)
        {
            cout<<"enter number "<<i<<"\t";
            cin>>num;
            if(num>max)
            {
                max=num;
            }
            i++;
        }
        cout<<max<<" is largest number ";
        
    }
        return 0;
}