#include <iostream>
using namespace std;

void SWAP(int &x,int &y)
{
    int aux=x;
    x=y;
    y=aux;
}

int main()
{
    int n=3;
    int m=2;

    SWAP(n,m);

    cout<<n;
    cout<<"\n";
    cout<<m;

    cout<<"\n";
    return 0;
}