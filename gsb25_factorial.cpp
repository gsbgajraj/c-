#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=n;i>0;i--)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"Enter a no whose factorial to be found:";
    cin>>n;
    cout<<"factorial of a no is:"<<fact(n);
    return 0;
}