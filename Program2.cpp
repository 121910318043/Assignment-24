#include<iostream>
using namespace std;
int highdigit(int);
int main()
{
    int n;
    cout<<"Enter a value ";
    cin>>n;
    cout<<highdigit(n);
    return 0;
}
int highdigit(int num)
{
    int max=0;
    while(num>0)
    {
        if(num%10>max)
        {
            max=num%10;
        }
        if(max==9)
            break;
        num=num/10;
    }
    return max;
}
