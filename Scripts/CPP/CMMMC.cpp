#include <iostream>
using namespace std;

int CMMMC(int x,int y)
{
    int aux=x*y;
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        if(y>x)
        {
            y=y-x;
        }
    }
    return aux/x;
}

int main()
{
    cout<<CMMMC(25,10);
    cout<<"\n";
    return 0;
}