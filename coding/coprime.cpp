#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int hcf=1;
    for(int i=1;i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
    }
    if(hcf==1)
    {
        cout<<"Coprime";
    }
    else
    {
        cout<<"Not Coprime";
    }
return 0;
}
