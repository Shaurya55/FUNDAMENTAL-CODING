#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int max(int a[], int l)
{
    if(l==0)
    {
        return a[0];
    }
    else{
        if(a[l]<max(a,l-1))
        {
            return max(a,l-1);
        }
        else{
            return a[l];
        }
    }
}

int main()
{
    int a[8]={1,2,3,4,8,9,7,6};
    int l=8;
    cout<<max(a,l);
}