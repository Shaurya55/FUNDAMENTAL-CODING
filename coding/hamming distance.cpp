#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    cout<<c;

    return 0;
}
