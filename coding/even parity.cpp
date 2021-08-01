#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int one=0;
    int k;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            one++;
        }
    }
    if(one%2==0){
        k=0;
    }
    else{
        k=1;
    }
    cout<<k;
}