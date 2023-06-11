#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int max=(a>b)?a:b;
    cout<<"maximum is "<<max<<endl;
    return 0;
}