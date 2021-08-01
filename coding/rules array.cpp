#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && b[i]%2==0){
            a[i]=a[i]+b[i];
        }
        else if(a[i]%2!=0 && b[i]%2!=0){
            a[i]=a[i]*b[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
