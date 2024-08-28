#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int maths,science,english,sst,computer;
    float avg;
    cout<<"Enter marks of subject maths:";
    cin>>maths;
    cout<<"Enter marks of subject science:";
    cin>>science;
    cout<<"Enter marks of subject english:";
    cin>>english;
    cout<<"Enter marks of subject sst:";
    cin>>sst;
    cout<<"Enter marks of subject computer:";
    cin>>computer;
    avg=(maths+science+english+sst+computer)/5;
    cout<<"The average of the numbers is :"<<avg;
    return 0;
}
