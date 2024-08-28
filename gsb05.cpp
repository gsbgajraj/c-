#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //swapping two numbers in python
    int a,b,temp;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cout<<"numbers before swapping: "<<a<<b;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"numbers after swapping: "<<a<<" "<<b;
    return 0;
}