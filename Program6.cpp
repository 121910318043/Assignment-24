#include<iostream>
/*Define a function to swap data of two int variables using call by reference*/
using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Swapped number = "<<a<<"  "<<b;
    return 0;
}
void swap(int &m,int &n)
{
    m=m+n;
    n=m-n;
    m=m-n;
}

