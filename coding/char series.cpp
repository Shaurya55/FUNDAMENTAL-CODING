#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char x='A',y='Z';
    int i;
    for(i=1;i<=15;i++)
    {
        cout<<x<<y<<" ";
        x=x+2;
        y=y-1;
    }
return 0;
}
