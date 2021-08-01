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
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        count++;
    }
    mean=(float)sum/n;
    for(int i=0;i<n;i++){
        if(a[i]>mean)
            cout<<a[i]<<" ";
    }
}
