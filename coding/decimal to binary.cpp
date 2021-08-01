#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    int b[1000];
    int k=0;
    while(n!=0){
        b[k++]=n%2;
        n=n/2;
        c++;
    }
    
    for(int i=c-1;i>=0;i--){
        cout<<b[i]<<" ";
    }

    return 0;
}
