#include<iostream>
#include<math.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int s1=0;
    for(int i=0;i<n;i++){
        s1+=a[i]*pow(2,n-1-i);
    }
    cout<<s1;
    
    
    return 0;
}
