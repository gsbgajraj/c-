#include<iostream>
using namespace std;
int main() 
{
    int i,j,Arr[5][5];
    cout<<"Enter the elements of the first array: \n";
    for ( i = 0; i <2; i++)
    {
        for (j = 0;j <2; j++)
        {
            cin>>Arr[i][j];
        }
        cout<<endl;
    }
    cout<<"displaying the elements of the matrix:\n";
    for ( i = 0; i <2; i++)
      {
        for (j = 0;j <2; j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}