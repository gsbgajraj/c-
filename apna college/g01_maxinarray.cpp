#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many elements you want in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxno){
        maxno=arr[i];}
        if(arr[i]<minno)
        {
            minno=arr[i];
        }
    }
    cout<<"maxno is:"<<maxno<<"\nmin no is:"<<minno;
    return 0;
}