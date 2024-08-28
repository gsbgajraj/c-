//program of inserting an element in array
#include<iostream>
using namespace std;
int main()
{
    int A[10]={41,53,67,34,98,45}; 
    int num,pos;  
    cout<<"Enter the no and its index no you want to Enter:";
    cin>>num>>pos;        
    for (int i=6; i>=pos; i--)
    {
      A[i+1]=A[i]; 
    }
    cout<<"Updated Arrray:";
    for (int i = 0; i<7; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}