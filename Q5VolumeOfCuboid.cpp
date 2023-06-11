/*Write a C++ program to calculate the volume of a cuboid.*/
#include<iostream>
using namespace std;
int main(void)
{
    int l,b,h,v;
    cout<<"enter length, breadth and hight"<<endl;
    cin>>l>>b>>h;
    v=l*b*h;
    cout<<"voulume of cuboid is l*b*h"<<endl<<"volume is = "<<v;
    return 0;
}