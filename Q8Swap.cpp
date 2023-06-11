/*Write a C++ program to swap values of two int variables without using third variable*/
#include<iostream>
using namespace std;
int main(void)
{
    int a,b;
    cout<<"Entre Two numbers"<<endl;
    cin>>a>>b;
    cout<<"before swaping "<<a<<" "<<b<<endl;
    b+=a;
    a=b-a;
    b=b-a;
    cout<<"After swaping "<<a<<" "<<b;
    return 0;

}