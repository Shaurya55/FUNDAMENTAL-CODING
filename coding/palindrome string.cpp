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
    int flag=0;
    int l=strlen(ch);
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        if(ch[i]!=ch[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"not";
    }
    
    
}
            
        
    

