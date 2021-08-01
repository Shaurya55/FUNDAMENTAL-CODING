#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

int add(int a)
{
    if(a==1){
        return 1;
    }
    if(a==0){
        return 0;
    }
    else{
        return a%10+add(a/10);
        
    }
}

int main()
{
   int a;
   cin>>a;
   cout<<add(a);
}