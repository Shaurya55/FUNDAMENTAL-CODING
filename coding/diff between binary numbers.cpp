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
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s1=1;
    for(int i=0;i<n;i++){
        s1+=a[i]*pow(2,n-1-i);
    }
    int s2=1;
    for(int i=0;i<n;i++){
        s2+=b[i]*pow(2,n-1-i);
    }
    int s3=abs(s1-s2);
    cout<<s3;
    
    
    return 0;
}
