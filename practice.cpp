#include<iostream>
using namespace std;
int main() 
{
    int a[2];
    cout<<"Enter the elements of the first array: ";
    for ( int i = 0; i <3; i++)
    {
        cin>>a[i];
    }
    for ( int i = 0; i <3; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}