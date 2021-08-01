#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
using namespace std;

int main(){
    int n;cin>>n;
    char s[n];
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]>='a'||s[i]<='z'){
            s[i]=s[i]-'a'+'A';//s[i]=s[i]-32;
        }
    }
    cout<<s;
}