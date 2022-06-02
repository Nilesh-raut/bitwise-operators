#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"please enter the num ";
    cin>>n;
    int i = 2;
    int count = 0;

    while (i < n)
    {

        if (n % i == 0)
        {
            count++;
        }
        i++;
    }

    if (count==0)
    {
        cout<<"This is prime num ";
    }
    else
    {
       cout<<"This is not prime num ";
    }
    

    // int a =2,b=6;
    // int c= b%a;
    // cout<<c;

    return 0;
}