#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    char st[100];
    int flag=0;
    cin>>st;
    int l=strlen(st);
    for(int i=0;i<l;i++)
    {
        if(st[i]>='0'&&st[i]<='9')
        {
            i++;
            while(st[i]>='0'&&st[i]<='9')
            {
                i++;
                if(st[i]=='.')
                {
                        i++;
                        if(st[i]>='0'&&st[i]<='9')
                        {
                            i++;
                            while(st[i]>='0'&&st[i]<='9')
                            {
                                i++;
                                if(st[i]=='e')
                                {
                                        i++;
                                        if(st[i]=='+'||st[i]=='-')
                                        {
                                                i++;
                                                if(st[i]>='0'&&st[i]<='9')
                                                {
                                                        i++;
                                                         while(st[i]>='0'&&st[i]<='9')
                                                        {
                                                                if(i==l-1){
                                                                    cout<<"Valid";
                                                                    flag=1;
                                                                }i++;
                                                        }
                                                }
                                        }
                                }
                            }
                        }
                }
            }
        }
    }
    if(flag==0){
        cout<<"NOT VALID";
    }
    return 0;
}