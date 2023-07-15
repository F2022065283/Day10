#include<iostream>
using namespace std;
int main()
{
    int n=10,a;
    a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || j==a )
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
        a--;
    }
}