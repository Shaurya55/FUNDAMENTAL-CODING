#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    int ar[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>ar[i][j];
        }
    }
    int size=a*b;
    int odd[size];
    int even[size];
    for(int i=0;i<size;i++){
        odd[i]=-1;
        even[i]=-1;
    }
    int k=0;
    int l=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(ar[i][j]%2==0){
                even[k++]=ar[i][j];
            }
            else{
                odd[l++]=ar[i][j];
            }
        }
    }
    for(int i=0;even[i]!=-1;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    for(int i=0;odd[i]!=-1;i++){
        cout<<odd[i]<<" ";
    }
}
    
