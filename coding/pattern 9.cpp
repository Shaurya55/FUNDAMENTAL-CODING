#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        count=count+i;
        for(int j=0;j<i;j++)
        {
                cout<<count-j<<" ";
        }
        cout<<endl;
    }
}
