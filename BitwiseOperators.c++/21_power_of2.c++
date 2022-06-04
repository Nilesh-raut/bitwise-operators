#include <iostream>
using namespace std;
bool checkTwoPowerOrNot(int n)
{

    return n && !(n & n - 1);
}

int main()
{

    int n;
    cin >> n;
    cout << checkTwoPowerOrNot(n);

    return 0;
}