#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int dec(int a, int i)
{
    //int c=count(a);
    if(a==0){
        return 0;
    }
    else{
        return (a%10*pow(2,i))+dec(a/10,i+1);
    }
}



int main()
{
   int a;
   cin>>a;
   int i=0;
   cout<<dec(a,i);
}