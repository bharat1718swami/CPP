#include<iostream>
using namespace std;


int main(){

      int n,i,j;
    cin>>n;
    i=1;
    while(i<=n)
    {
        int k=1,j=i;
       while(k<=i)
       {
           cout<<j;
           j++;
           k++;
       }
        cout<<endl;
        i++;
    }

    return 0;
  
}


