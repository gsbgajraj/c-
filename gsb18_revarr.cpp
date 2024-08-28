#include<iostream>
using namespace std;
int main() 
{
    int i,j,Arr1[20];
    cout<<"Enter the elements of the first array: ";
    for ( i = 0; i <4; i++)
    {
        cin>>Arr1[i];
    }
    cout<<"displaying the elements of the array: ";
    for ( i = 3; i >=0; i--)
    {
        cout<<Arr1[i]<<" ";
    }
    return 0;
}