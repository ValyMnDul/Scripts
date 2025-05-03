#include <iostream>
using namespace std;

bool Prim(int x)
{
    if(x<=1) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i=i+2) if(x%i==0) return false;
    return true;
}

int main()
{
    int n;cin>>n;
    cout<<Prim(n);

    cout<<"\n";
    return 0;
}