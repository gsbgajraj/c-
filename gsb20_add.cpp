#include<iostream>
using namespace std;
int main() 
{
    int i,j,A1[5][5],A2[5][5],c[5][5];
    cout<<"Enter the elements of the first matrix: \n";
    for ( i = 1; i <=2; i++)
    {
        for (j = 1;j <=2; j++)
        {
            cout<<"Enter element at: "<<"A1"<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>A1[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: \n";
    for ( i = 1; i <=2; i++)
    {
        for (j = 1;j<=2; j++)
        {
            cout<<"Enter element at: "<<"A1"<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>A2[i][j];
        }
    }
    // addition of the matrix
    for ( i = 1; i <=2; i++)
      {
        for (j = 1;j <=2; j++)
        {
            c[i][j]=A1[i][j]+A2[i][j];
        }
        cout<<endl;
    }
    cout<<"displaying the elements of the matrix after addition:\n";
    for ( i = 1; i <=2; i++)
      {
        for (j = 1;j <=2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}