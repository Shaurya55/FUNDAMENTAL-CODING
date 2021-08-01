#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int a,r;
    cin>>n;
    cin>>a>>r;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=sum+a;
        a=a*r;
    }
    cout<<endl<<sum;
return 0;
}
