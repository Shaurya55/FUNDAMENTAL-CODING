#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int bin(int a)
{
    if(a==0){
        return 0;
    }
    else{
        bin(a/2);
        cout<<a%2;
    }
}



int main()
{
   int a;
   cin>>a;
   bin(a);
}