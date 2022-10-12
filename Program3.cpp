#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int num,pow;
    cout<<"Enter a number ";
    cin>>num;
    cout<<"Enter power value ";
    cin>>pow;
    cout<<power(num,pow);
    return 0;
}
int power(int x,int y)
{
    int i,num=1;
    for(i=1;i<=y;i++)
    {
        num = num * x;
    }
    return num;
}
