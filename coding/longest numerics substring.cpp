#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    char ch[100];
    cin>>ch;
    int l=strlen(ch);
    int max=0;
    int count=0;
    int flag=0;
    int m,n,mm=0,mn=-1;
    for(int i=0;i<strlen(ch);i++)
    {
        flag=0;
        if(ch[1]>='0'&&ch[1]<='9')
        {
            flag=1;
            m=i;
            count=0;
            while(i<l&&ch[1]>='0'&&ch[1]<='9')
            {
                count++;
                i++;
            }
            n=l-1;
        }
        
        if(flag)
        {
            if(max<count)
            {
                max=count;
                mm=m;
                mn=n;
            }
            i=i-1;
        }
    }
    for(int i=mm;i<=mn;i++){
        cout<<ch[i];
    }
    return 0;
}
