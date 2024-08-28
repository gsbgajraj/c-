#include<iostream>
using namespace std;
int fact(int n)
{
    int fac=1;
    for (int i=n; i>0; i--)
    {
        fac*=1;
    }
    return fac;
}
int main()
{
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<fact(n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<fact(i)/((fact(i-j)*fact(j)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
