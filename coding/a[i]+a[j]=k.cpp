#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
}