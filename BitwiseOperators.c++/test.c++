#include<iostream>
#include<math.h>
using namespace std;
int main(){
 
int num = 6;
int digit;
int sum =0;
int x;

digit = (num&1);
cout<<digit<<"<--digit "<<endl;
x =digit*pow(10,0);
cout<<x<<"<--x"<<endl;
sum = (digit*pow(10,0))+sum;
cout<<sum<<"<--sum"<<endl;
num = num>>1;
cout<<endl;


digit = (num&1);
cout<<digit<<"<--digit "<<endl;
x =digit*pow(10,1);
cout<<x<<"<--x"<<endl;
sum = (digit*pow(10,1))+sum;
cout<<sum<<"<--sum"<<endl;
num = num>>1;
cout<<endl;


digit = (num&1);
cout<<digit<<"<--digit "<<endl;
x = digit*pow(10,2);
cout<<x<<"<--x"<<endl;
cout<<sum<<"<--"<<endl;
sum = x+sum;
cout<<sum<<"<--sum"<<endl;
num = num>>1;
cout<<endl;



cout<<digit*pow(10,2);
return 0;
}