#include<iostream>
/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
using namespace std;
void maxi(int,int);
void maxi(float,float);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    maxi(a,b);
    cout<<"Enter two numbers: ";
    cin>>c>>d;
    maxi(c,d);
    return 0;
}
void maxi(int a,int b)
{
    if(a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else
    {
        cout<<b<<" is greater than "<<a;
    }
}
void maxi(float a,float b)
{
    if(a>b)
    {
        cout<<float(a)<<" is greater than "<<float(b);
    }
    else
    {
        cout<<(float)b<<" is greater than "<<(float)a;
    }
}
