#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int output[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            output[k]=a[i];
            k++;
        }
        
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            output[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
    
    return 0;
}
