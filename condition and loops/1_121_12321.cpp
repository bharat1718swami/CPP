#include <iostream>

using namespace std;
int main()
{
    int n, i, j;
    cout << "enter a number\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j < n-i+1)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        j = j - 2;
        while (j > 0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}