#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int position = 399;

    int mask = 1 << position;

    int result = n & mask;

    // cout << result;

    if (result == 0)
        cout << "The bit is zero " << endl;

    else
        cout << "The bit is one " << endl;

    return 0;
}