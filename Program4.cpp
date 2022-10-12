#include<iostream>
using namespace std;
void pascal(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pascal(n);
    return 0;
}
void pascal(int n)
{
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                a[i][j]=1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                cout << a[i][j];
        }
        cout<<endl;
    }
}

