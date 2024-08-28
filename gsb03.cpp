#include<iostream>
#include<stdio.h>
class student
{
    public:
    int maths,science,english,sst,computer;
    float avg;
    public:
    void getdata();
    void printdata();
};
void student :: getdata()
{
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
    // avg=(maths+science+english+sst+computer)/5;

}
void student :: printdata()
{
    // int maths,science,english,sst,computer;
    // float avg;
    cout<<"marks of subject maths:";
    cout<<"marks of subject science:";
    cout<<"marks of subject english:";
    cout<<"marks of subject sst:";
    cout<<"marks of subject computer:";
    // cout<<"The average of the numbers is :"<<avg;
}
void main()
{
 m
 getdata();
 printdata();
 return 0;
}