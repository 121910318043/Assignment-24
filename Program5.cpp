#include<iostream>
/*Define a function to check whether a given number is a term in a Fibonacci series or
not.*/
using namespace std;
void fibonacci(int);
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int i,j=0,k=1,s;
    for(i=0;i<=n;i++)
    {
        if(j==n)
        {
            cout<<n<<" is a term in fibonacci";
            break;
        }
        s=j+k;
        j=k;
        k=s;
    }
    if(i>n)
    {
        cout<<n<<" is not a term in fibonacci";
    }
}
