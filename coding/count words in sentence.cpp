#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    string s="Shaurya is a good boy";
    string b=s+" ";
    int c=0;
    for(int i=0;i<b.length();i++){
        if(b[i]==' '){
            c++;
        }
    }
    cout<<c;
    return 0;
}
