#include <iostream>
using namespace std;

int main()
{

    int n, i, j, k, l;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        l = n - i;
        while (l > 0)
        {
            cout << " ";
            l--;
        }
        j = 1;
        while (j <= (2 * i - 1))
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
    return 0;
}
