#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int a,diff;
    cin>>n;
    cin>>a>>diff;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=sum+a;
        a=a+diff;
    }
    cout<<endl<<sum;
return 0;
}
