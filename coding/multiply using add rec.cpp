#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int mul(int n,int m)
{
    if(n==1&&m==1)
    {
        return 1;
    }
    if(n==0||m==0){
        return 0;
    }
    else{
        return n+mul(n,m-1);
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<mul(n,m);
}