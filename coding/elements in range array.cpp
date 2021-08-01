#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    float mean;
    int count=0;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c,b;
    cin>>c>>b;
    for(int i=0;i<n;i++){
        if(a[i]>c && a[i]<b)
            cout<<a[i]<<" ";
    }
}
