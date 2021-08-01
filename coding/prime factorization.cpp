#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b=a;
    int c=0;
    int flag=0;
    cin>>a;
    int temp=2;
    while(a>0)
    {
        flag=0;
        if(a%temp==0)
        {
            c++;
        }
        else
        {
            flag=1;
            if(c!=0)
            {
                cout<<temp<<"^"<<c<<" ";
            }
            c=0;
            temp++;
            if(a==1)
                break;
        }
        if(flag==0)
        {
            a=a/temp;
        }
    }
return 0;
}
