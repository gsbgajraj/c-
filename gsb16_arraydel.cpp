//program of deletion in array
#include<iostream>
using namespace std;
int main()
{
    int A[6]={41,53,67,34,98,45}; 
    int num,pos;  
    cout<<"Enter the no and its index no you want to delete:";
    cin>>num>>pos;        
    for (int i = pos; i <6; i++)
    {
      A[i]=A[i+1]; 
    }
    cout<<"Updated Arrray:";
    for (int i = 0; i <5; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}