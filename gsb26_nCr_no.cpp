#include<iostream>
using namespace std;
int fact(int n)
{
    int fac=1;
    for(int i=n;i>0;i--)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
    int n,nCr,r;
    cout<<"Enter value of n and r:";
    cin>>n>>r;
    nCr=fact(n)/(fact(n-r)*fact(r));
    cout<<"factorial of a no is:"<<nCr;
    return 0;
}
