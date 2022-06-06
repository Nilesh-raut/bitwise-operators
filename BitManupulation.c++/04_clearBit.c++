#include<iostream>
using namespace std;
int main(){
 
int n=5;

int position;
cout<<"Enter the position you"<<endl;
cin>>position;

int bitMask=1<<position;
int notBitMask = ~(bitMask);

cout<<(notBitMask&n);
 
return 0;
}