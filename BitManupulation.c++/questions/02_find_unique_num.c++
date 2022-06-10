// write a program to find inique number in array where all number except one,are present twice

#include<iostream>
using namespace std;
int main(){
 
int size= 7;
int arr[size]={2,4,6,3,4,6,2};
int unique=2;

for (int i = 1; i < size; i++)
{
    unique = unique ^arr[i];
}
cout<<unique;
 
return 0;
}