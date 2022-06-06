// update
// zero -> one
#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int position;
    cout<<"Enter the position where you want to need update "<<endl;
    cin>>position;
    int bitMask = 1 << position;

    int result = n | (bitMask);
    cout<<result;


    return 0;
}