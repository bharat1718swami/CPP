#include <iostream>
using namespace std;
int main()
{
    int N, i, j;
    cout << "enter any positive number\n";
    cin >> N;
    i = 3;                //original number 
    cout << "prime numbers are\n1\n2\n";
    while (i <= N)
    {
    j = 2;                          //for finding prime or not
        while (j < i)
        {
            if (i % j == 0)
            {
                break;
            }
            j++;
        }
        if (j == i)
        {
            cout <<i<<endl;
        }
        i++;
    }
    return 0;
}