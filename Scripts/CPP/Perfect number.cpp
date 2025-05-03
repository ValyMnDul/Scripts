#include <iostream>
using namespace std;

bool NumarPerfect(int x)
{
    int s=1;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            s=s+i;
        }
    }
    if(x==s) return true;
    else return false;
}

int main()
{
    int n;cin>>n;
    cout<<NumarPerfect(n);

    cout<<"\n";
    return 0;
}