#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter a number you want to check:";
    cin>>n;
    int originaln=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln)
    {
        cout<<"Armstrong no.";
    }
    else
    {
        cout<<"Given no is not a Armstrong no.";
    }
    return 0;
}