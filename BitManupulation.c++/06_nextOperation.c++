// update
// one -> zero
#include <iostream>
using namespace std;
int main()
{

    int n = 5;

    int position;
    cout << "Enter the position ";
    cin >> position;

    int bitMask = 1 << position;

    int notBitMask = ~(bitMask);

    int result = notBitMask & n;

    cout<<result;

    return 0;
}