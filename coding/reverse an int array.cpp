#include <iostream>
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
    int f,r;
    f=0;
    r=n-1;
    while(f<r){
        int temp=a[f];
        a[f]=a[r];
        a[r]=temp;
        f++;
        r--;
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
