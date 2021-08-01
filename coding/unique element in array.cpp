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
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j)cout<<a[i]<<endl;
    }
    
}
    
