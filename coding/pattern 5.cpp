#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
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
    for(int i=1;i<=n;i++)
    {
        if(i==1){
            continue;
        }
        for(int j=1;j<=(i-1);i++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-2*i+1);i++){
            cout<<"*";
        }
        break;
    }
    cout<<endl;
}
