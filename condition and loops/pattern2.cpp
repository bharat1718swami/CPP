#include <iostream>
using namespace std;

int main()
{

    int n, i, j, k, l;
    cin >> n;
    i = 1; // for number of rows
    while (i <= n)
    {
        l = n - i; // for spaces
        while (l > 0)
        {
            cout << " ";
            l--;
        }
        j = i, k = 1;  // j for counting/printing
        while (k <= i) // k for how many number print in a row
        {
            cout << j;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
