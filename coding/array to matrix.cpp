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
    int ab=0,b=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            ab=i;
            b=n/i;
            break;
        }
    }
    int m[ab][b]; int k=0;
    for(int i=0;i<ab;i++){
        for(int j=0;j<b;j++){
            m[i][j]=a[k++];
        }
    }
    for(int i=0;i<ab;i++){
        for(int j=0;j<b;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
    
