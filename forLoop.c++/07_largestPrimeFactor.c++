// find largest prime factor
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    n = n + 1;
    int arr[n] = {0};
    int arr2[n]={0};

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * 2; j <= n; j=j+i)
            {
                arr[j] = i;
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



    int k;
    cout<<"enter the value of k ";
    cin>>k;

    cout<<arr[k];

    return 0;
}