#include <iostream>
using namespace std;

int B10_B2(int x)
{
    int R=0;int p=1;
    while(x!=0)
    {
        R=R+(x%2)*p;
        p=p*10;
        x=x/2;
    }
    return R;
}

int main()
{
    int n;cin>>n;
    cout<<B10_B2(n);

    cout<<"\n";
    return 0;
}