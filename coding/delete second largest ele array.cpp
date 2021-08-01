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
    int sec_max=a[0];
    for(int i=0;i<n;i++){
        if(max>a[i] && sec_max<a[i]){
            sec_max=a[i];
        }
    }
    int ad;
    for(int i=0;i<n;i++){
        if(sec_max==a[i]){
            ad=i;
            break;
        }
    }
    for(int j=ad;j<n-1;j++){
        a[j]=a[j+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
