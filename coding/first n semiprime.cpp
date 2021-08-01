//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

int check_prime(int n)
{
    int sroot=sqrt(n);
    for(int i=2;i<=sroot;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int sroot;
    cin>>n;
    for(int j=1;;j++)
    {
        int flag=0;
        sroot=sqrt(j);
        for(int i=2;i<=sroot;i++)
        {
            if(j%i==0)
            {
                if(check_prime(i)&&check_prime(j/i))
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<j<<" ";
            n--;
        }
        if(n==0){
            break;
        }
    }
}
