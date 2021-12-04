#include<iostream>
using namespace std;


int main(){

      int n,i,j,k;
    cin>>n;
    k=n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
  
}


