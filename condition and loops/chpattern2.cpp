#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    char abc;
    cin>>n;
    i=1;
    while (i<=n)
    {
        abc='A'+i-1,j=1;
        while (j<=n)
        {
            cout<<abc<<" ";
            j++;
            abc++;
        }

        cout<<endl;
        i++;    
    }
    return 0;
}