#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max;
    if(a>=b&&a>=c)
    {
        if(b>=c)
            max=b;
        else
            max=c;
    }
    else
    {
        if(b>=a&&b>=c)
        {
            if(a>=c)
                max=a;
            else
                max=c;
        }
        else 
        {
            if(a>=b)
                max=a;
            else
                max=c;
        }
    }
cout<<max;
return 0;
}
