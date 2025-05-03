#include <iostream>
using namespace std;

int CMMDC(int x,int y)
{
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
    return x;
}


int main()
{
    cout<<CMMDC(32,72);
    cout<<"\n";
    return 0;
}