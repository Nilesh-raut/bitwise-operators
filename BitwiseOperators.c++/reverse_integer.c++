#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cin>>x;

    int sum = 0;
    while (x != 0)
    {
        if (INT_MAX / 10 < sum || INT_MIN / 10 > sum)
        {
            return 0;
        }
        int digit = x % 10;
        sum = (sum * 10) + digit;
        x = x / 10;
    }
    cout<<sum;

    return 0;
}