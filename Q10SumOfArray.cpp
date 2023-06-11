/*Write a C++ program to add all the numbers of an array of size 10*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0,i;
    cout<<"enter number for array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    cout<<"sum of array is "<<sum<<endl;

}