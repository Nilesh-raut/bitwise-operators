#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n ";
    cin >> n;
    n = n + 1;
    int arr[n] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i*2; j <= n; j=j+i)
            {
                arr[j] = 1;
            }
        }
    }


    int count =0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    cout<<endl;
    cout<<count;
    return 0;
}