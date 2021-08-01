#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k;
    int x,y;
    cin>>k;
    cin>>x>>y;
    int sum=0;
    for(int i=1;i<=k;i++)
    {
        sum=sum+x+y;
        cout<<x<<" "<<y<<" ";
        x=x*3;
        y=y*2;
    }
    cout<<sum;
return 0;
}
