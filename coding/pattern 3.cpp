#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, count=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            if(count%2==1)
                cout<<"0";
            else
                cout<<"1";
            count++;
            
        }
        cout<<endl;
    }
}
