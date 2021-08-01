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
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int m=max+1;
    int b[m];
    for(int i=0;i<max+1;i++){
        b[i]=0;
        }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(b[i]>0){
            cout<<i<<":"<<b[i]<<endl;
        }
    }
}
    
