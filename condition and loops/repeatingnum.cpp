#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,i,j,num;
    cin>>n;
    i=1;
    num=1;
    while(i<=n)
    {
        j=pow(2,i-1);
        while(j>0)
        {
            if(num<=9)
            {
                cout<<num;
            }
            else
            {
                num=1;
                cout<<num;
            }
            num++;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}