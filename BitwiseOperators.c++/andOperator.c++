//  &    <---this is sign of AND operator

// 0 & 0 =0
// 1 & 0 =0
// 0 & 1 =0
// 1 & 1 =1

// but how to convert decimal to binary ?
// use 8421 this method.

#include<iostream>
using namespace std;
int main(){
 
int a = 2;
// 2 = 10
int b = 3;
// 3 = 11

cout<<(a&b);

// 2 = 10
// 3 = 11
// 2 = 10

 
return 0;
}