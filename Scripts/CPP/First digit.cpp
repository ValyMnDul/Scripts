#include <iostream>
using namespace std;

int PrimaCifra(int x)
{
    while(x!=0)
    {
        x=x/10;
    }
    return x;
}

int main()
{
    cout<<PrimaCifra(4325);
    cout<<"\n";
    return 0;
}