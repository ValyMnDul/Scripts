#include <iostream>
using namespace std;

int SumaDivizorilor(int x)
{
    int s=0;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            s=s+i;
        }
    }
    return s;
}

int main()
{
    cout<<SumaDivizorilor(12);
    cout<<"\n";
    return 0;
}