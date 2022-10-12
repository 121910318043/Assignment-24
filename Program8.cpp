#include<iostream>
/*Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
using namespace std;
float area(int );
int area(int ,int);
float area(float,float);
int main()
{
    int r,l,b;
    float h,p;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<area(r)<<endl;
    cout<<"Enter Length and Breadth of the Rectangle: ";
    cin>>l>>b;
    cout<<area(l,b)<<endl;
    cout<<"Enter base and height of a triangle: ";
    cin>>p>>h;
    cout<<area(p,h);
    return 0;
}
float area(int r){
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(float p,float h)
{
    return 0.5*p*h;
}
