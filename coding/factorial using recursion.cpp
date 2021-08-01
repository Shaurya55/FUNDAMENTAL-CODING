#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int fac(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fac(n);
}