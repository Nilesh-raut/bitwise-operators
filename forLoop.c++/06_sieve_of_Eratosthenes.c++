// sieve of Eratosthenes
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the range of number " << endl;
    cin >> n;
    n = n + 1;
    bool arr[n] = {0};
    // cout<<

    for (int i = 2;  i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                arr[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}