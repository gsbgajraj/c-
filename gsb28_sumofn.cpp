#include<iostream>
using namespace std;
int sum(int n)
{
  int ans=0;
  for(int i=0;i<=n;i++)
  {
    ans+=i;
  }
  return ans;

}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"sum of n integers is:"<<sum(n);
    return 0;
}