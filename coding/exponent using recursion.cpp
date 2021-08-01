#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int po(int n,int m)
{
    if(m==0){
        return 1;
    }
    else{
        return n*po(n,m-1);
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<po(n,m);
}