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
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            c1++;
        }
        else if(a[i]==1){
            c2++;
        }
    }
    int k=0;
    while(c1>0 && c2>0){
        a[k++]=0;
        a[k++]=1;
        c1--;
        c2--;
    }
    while(c1>0){
        a[k++]=0;
        c1--;
    }
    while(c2>0){
        a[k++]=1;
        c2--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}