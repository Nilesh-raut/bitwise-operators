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
        arr[i]=i;
    }
    

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j <= n; j = i + j)
            {
                // arr[j] = 1;
                if (arr[j] == j)
                {
                    arr[j] = i;
                }
            }
        }
    }




    for (int i = 2; i <= n; i++)
    {
        // if (arr[i] == i)
        {
            // cout << i << " ";
            cout << i<<" "<<arr[i] << " ";
        }
    }
    // int k;
    // cout << "Enter the elment for find the smallest factor " << endl;
    // cin >> k;
    // cout << arr[k];

cout<<endl;
    n = n-1;
    while (n!=1)
    {
        cout<<arr[n]<<" ";
        n = n/arr[n];
    }
    


    return 0;
}