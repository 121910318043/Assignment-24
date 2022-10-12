#include<iostream>
using namespace std;
void pnum(int);
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    pnum(n);
    return 0;
}
void pnum(int num)
{
    int i,flag=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
        if(flag>2)
        {
            break;
        }
    }
    if(flag==2)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
