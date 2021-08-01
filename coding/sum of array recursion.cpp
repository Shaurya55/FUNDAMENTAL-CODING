#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int add(int a[], int l)
{
    if(l==0){
        return a[0];
    }
    else{
        return a[l]+add(a,l-1);
    }
}

int main()
{
    int a[8]={1,2,3,4,8,9,7,6};
    int l=8;
    cout<<add(a,l);
}