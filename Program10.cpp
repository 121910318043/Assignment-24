#include<iostream>
using namespace std;
/*Write functions using function overloading to add two numbers having different data
types.*/
int add(float,int);
int add(int,float);
int main()
{
    int a;
    float b;
    cout<<"Enter a number ";
    cin>>a;
    cout<<endl;
    cout<<"Enter a real number ";
    cin>>b;
    cout<<endl;
    cout<<add(a,b);
    cout<<endl;
    cout<<add(b,a);
    return 0;
}
int add(float a,int b)
{
    return a+b;
}
int add(int a,float b)
{
    return a+b;
}
