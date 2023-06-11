/*Write a C++ program to calculate the area of a circle*/
#include<iostream>
using namespace std;

int main(void)
{
    int r;
    float a;
    cout<<"Enter radius"<<endl;
    cin>>r;
    a=r*r*3.14;
    cout<<"Area of circle is = "<<a;
    return 0;
}