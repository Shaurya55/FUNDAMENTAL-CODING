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
    int max;
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max;
}
