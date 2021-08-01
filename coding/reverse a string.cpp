#include <iostream>
#include <stdio.h>
#include <stack> 
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[100];
    cin>>ch;
    int temp;
    int l=strlen(ch);
    for(int i=0,j=l-1;i<j;i++,j--)
    {
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
    }
    
    for(int i=0;i<l;i++)
    {
        cout<<ch[i];
    }
    return 0;
}
            
        
    
