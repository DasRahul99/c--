#include<iostream>
using namespace std;
int main()
{
    int a,b=1,i;
    cout<<"Enter the number\n";
    cin>>a;
    for(i=a;i>0;i--)
    {
        b=b*i;
    }
    cout<<"Factorial of "<<a<<" is "<<b;
}