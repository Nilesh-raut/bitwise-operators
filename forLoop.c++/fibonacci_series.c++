// what is fibonacci series
// 0 1 1 2 3 5 8 13 21 ...........

#include<iostream>
using namespace std;
int main(){
 
int a=0,b=1;
int sum =0;

int i=1,n;

cout<<"Enter the value of n "<<endl;
cin>>n;

cout<<a<<" ";
cout<<b<<" ";


while (i<=n-2)
{
    sum =a +b;
    
    a=b;
    b=sum;
    cout<<b<<" ";
i++;
}

 
return 0;
}