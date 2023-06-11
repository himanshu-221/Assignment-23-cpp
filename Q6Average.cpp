/*Write a C++ program to calculate an average of 3 numbers.*/
#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,ave=0;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    ave=(a+b+c)/3;
    cout<<"average is = "<<ave;
    return 0;
}