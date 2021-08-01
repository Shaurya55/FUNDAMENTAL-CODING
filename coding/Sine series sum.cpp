#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    float y;
    y=x*(3.142/180);
    int i=2;
    int c=1,j=0;
    float term=y;
    float sum=0;
    while(j<n)
    {
        
        if(c%2==1){
            sum=sum+term;
        }
        else{
            sum=sum-term;
        }
        term = term*x*x/(i*(i+1));
        i=i+2;
        j=j+1;
    }
    cout<<sum;
return 0;
}
