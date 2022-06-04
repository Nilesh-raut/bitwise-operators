// 375 dsa sheet question GFG
// Number of 1 Bits in binary

#include<iostream>
using namespace std;
int main(){
 
int n;
cout<<"Enter the value of n "<<endl;
cin>>n;
int count=0;
while (n)
{
    n = n&n-1;
    count++;
}

cout<<count;

 
return 0;
}