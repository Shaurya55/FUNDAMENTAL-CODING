#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    float c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<n;i++){
        c[i]=((float)a[i]/b[i])*100;
  
    }
    int max=c[0]; 
    for(int i=0;i<n;i++){
        if(max<c[i]){
            max=c[i];
        }
    }
    cout<<max;

    return 0;
}
