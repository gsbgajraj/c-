// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int d;
   int pm=300;
   for(d=0;d<10;d++)
   {
       if(d%2==0){
           continue;
       }
       if(pm==0)
       {
           break;
       }
       else{
           cout<<"you can enjoy your day"<<d<<endl;
           pm=pm-300;
       }
   }
   cout<<"pocket money is "<<pm;
   
    return 0;
}