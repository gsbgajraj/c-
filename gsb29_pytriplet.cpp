#include<iostream>
using namespace std;
bool check(int x,int y,int z)
{
    int b,c;
    int a=max(x,max(y,z));
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=z;
        c=x;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x,y,z;
    cout<<"Enter the values:";
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"It is a pythagores triplet";
    }
    else
    {
        cout<<"not a pythagores triplet";
    }
    return 0;
}