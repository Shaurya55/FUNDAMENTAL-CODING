#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i==b[i]]){
            c[i]=0;
        }
        else if(a[i]!=b[i]){
            c[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    

    return 0;
}
