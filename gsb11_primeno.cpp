// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
   int d;
   for(d=1;d<100;d++)
   {
    if(d%3==0)
      {
       continue;
      }
      cout<<d<<"  ";
   }
    return 0;
}