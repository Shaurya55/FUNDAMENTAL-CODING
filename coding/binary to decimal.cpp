#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    int j;
    int dec=0;
    while(n!=0)
    {
        j=n%10;
        dec=(dec+pow(2,c))*j;
        c++;
        n=n/10;
    }
    cout<<dec;
return 0;
}