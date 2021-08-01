#include <iostream>
#include <math.h>

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
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(a[i]==b[j])
           {
               break;
           }
           if(j==n)
           {
               cout<<a[i];
           }
       } 
    }
}
