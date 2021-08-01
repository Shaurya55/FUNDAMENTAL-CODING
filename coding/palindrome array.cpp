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
    
    int f=0;
    int r=n-1;
    int flag=1;
    while(f<r){
        if(a[f]!=a[r]){
            flag=0;
            break;
        }
        f++;
        r--;
    }
    if(flag==1){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
    
    return 0;
}
