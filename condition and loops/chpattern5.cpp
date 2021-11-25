#include<iostream>
using namespace std;


int main() {
    
    int n,i,j;
    char abc='A',ch;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1,ch=abc+n-i;
        while(j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
    
}
