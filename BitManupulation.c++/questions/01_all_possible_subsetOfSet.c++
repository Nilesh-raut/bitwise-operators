#include<iostream>
using namespace std;
int main(){
 
char arr[3]={'a','b','c'};
int i=0;

for (int i = 0; i < (1<<3); i++)
{
    cout<<"{";
    for (int j = 0; j <3 ; j++)
    {
        if (i|(1<<j))
        {
            cout<<arr[j];
        }
        // cout<<endl;
        
    }
    cout<<"}"<<endl;
}


 
return 0;
}