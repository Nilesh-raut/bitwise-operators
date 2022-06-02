#include <iostream>
using namespace std;
int main()
{

    for (int a = 0, b = 1, c = 3; a >= 0 && b >= 0 && c >= 0; a--, b--, c--)
    {
        cout << " " << a << " " << b << " " << c;
    }
    
    return 0;
}