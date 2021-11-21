#include<iostream>
using namespace std;


int main(){
    
    int n,i,j;
    char abc='A';
    cin>>n;
    i=1;
    while(i<=n)
    {
       j=1;
        while(j<=i)
        {
            cout<<abc;
            j++;
        }
        
        cout<<endl;
        i++;
        abc++;
    }
    return 0;
}

