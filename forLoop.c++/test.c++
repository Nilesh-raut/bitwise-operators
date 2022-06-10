#include <iostream>
using namespace std;
int main()
{
    int a = 10; /*A  10 = 01010*/
    int b = 20; /*B  20 = 10100*/
    int count = 0;
    //  int xyor = a ^ b;  /* xyor = 30 = 11110*/

    int n = a ^ b;
    while (n != 0)
    {
        n = n & n - 1;
        count++;
    }
    cout << count;

    // cout<<count;
    return 0;
}
