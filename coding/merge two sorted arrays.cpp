#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[2*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int k=0,i=0,j=0;
    while(i<n&&j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }
    for(int i=0;i<2*n;i++){
        cout<<c[i]<<" ";
    }
    
    

    return 0;
}
