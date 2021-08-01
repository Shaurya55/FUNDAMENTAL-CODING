#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int c;
    int d;
    float e=0.0f;
    int a,b;
    cin>>c;
    cin>>a>>b;
    switch(c)
    {
        case 1: d=a+b;
                cout<<d;
                break;
                
        case 2: d=a-b;
                cout<<d;
                break;
                
        case 3: d=a*b;
                cout<<d;
                break;
                
        case 4: e=a/b;
                cout<<e;
                break;
                
        case 5: d=pow(a,b);
                cout<<d;
                break;
                
        case 6: d=log(a);
                cout<<d;
                break;
        
        default: cout<<"Wrong Input";
    }
return 0;
}
