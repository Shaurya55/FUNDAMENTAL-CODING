#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    char st[100];
    cin>>st;
    int count[256]={0}; 
    for(int i=0;i<strlen(st);i++){
        count[st[i]]++;
    }
    int max=count[0], max_i=-1;
    for(int i=0;i<256;i++){
        if(max<count[i]){
            max=count[i];
            max_i=i;
        }
    }
    cout<<(char)max_i;
}