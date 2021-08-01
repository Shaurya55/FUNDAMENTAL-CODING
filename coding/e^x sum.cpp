#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    float term=1;
    float sum=0,epsilon=10e-7;
    int i=1;
    while(term>epsilon)
    {
        sum=sum+term;
        term=term*x/i;
        i++;
    }
    cout<<sum;
return 0;
}
