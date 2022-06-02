// 128 leetcode
// substract the product and sum of digit of and integer.
#include <iostream>
using namespace std;
int main()
{

    int n = 23446464;
    int digit;

    int sumOfNum = 0, productOfNum = 1;

    while (n != 0)
    {
        digit = n % 10;
        sumOfNum = sumOfNum + digit;
        productOfNum = productOfNum * digit;
        n = n / 10;
    }

    int ans = productOfNum-sumOfNum;
    cout<<ans;

    return 0;
}