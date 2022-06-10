// Sieve of Eratosthenes
// find smallest prime factor

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the range of num " << endl;
    cin >> n;

    n = n + 1;
    int arr[n] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2 * i; j <= n; j = i + j)
            {
                // arr[j] = 1;
                if (arr[j] == 0)
                {
                    arr[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
    int k;
    cout << "Enter the elment for find the smallest factor " << endl;
    cin >> k;
    cout << arr[k];

    return 0;
}