#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<count<<" ";
            else
                cout<<-count<<" ";
            count++;
        }
        cout<<endl;
    }
}
