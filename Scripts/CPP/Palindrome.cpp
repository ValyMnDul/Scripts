#include <iostream>
using namespace std;

bool Palindrom(int x)
{
    int OGL=0;
    int cx=x;
    while(x!=0)
    {
        OGL=OGL*10+x%10;
        x=x/10;
    }
    if(OGL==cx) return true;
    else return false;
}

int main()
{
    int n;cin>>n;
    cout<<Palindrom(n);

    cout<<"\n";
    return 0;
}