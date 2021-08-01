#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    if(m<50)
    {
        cout<<"F";
    }
    else if(m>=50 && m<60){
        cout<<"D";
    }
    else if(m>=60 && m<70){
        cout<<"C";
    }
    else if(m>=70 && m<80){
        cout<<"B";
    }
    else if(m>=80 && m<90){
        cout<<"A";
    }
    else if(m>90){
        cout<<"A+";
    }
return 0;
}
