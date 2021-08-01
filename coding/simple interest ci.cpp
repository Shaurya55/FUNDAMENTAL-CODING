#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float p,r,t;
    cin>>p>>r>>t;
    float si=0.0f;
    float ci=0.0f;
    si=(p*r*t)/100;
    ci=p*(pow((1+(r/100)),t)-1);
    cout<<si<<endl;
    cout<<ci<<endl;
return 0;
}
