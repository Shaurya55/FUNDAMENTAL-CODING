#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, count=1;
    cin>>n;
    int space=n-1,nos=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=nos;j++)
            cout<<"*";
        space--;
        nos+=2;
        cout<<endl;
    }
}
