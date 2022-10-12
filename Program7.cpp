#include<iostream>
using namespace std;
/*Write a function using the default argument that is able to add 2 or 3 numbers.*/
int add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter Three numbers: ";
    cin>>a>>b>>c;
    cout<<add(a,b,c)<<endl;
    int d,e;
    cout<<"Enter Two numbers: ";
    cin>>d>>e;
    cout<<add(d,e)<<endl;
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
