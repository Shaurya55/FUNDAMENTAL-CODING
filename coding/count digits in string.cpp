#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    char st[100];
    cin>>st;
    int c=0;
    for(int i=0;i<strlen(st);i++){
       if(st[i]>='0'&&st[i]=='9'){
           c++;
       }
       
   }
   cout<<c;
   
    
}