#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            cout<<i<<","<<a/i<<endl;
        }
    }
return 0;
}
