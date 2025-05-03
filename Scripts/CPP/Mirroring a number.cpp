#include <iostream>
using namespace std;

int Oglindit(int x)
{
    int OGL=0;
    while(x!=0)
    {
        OGL=OGL*10+(x%10);
        x=x/10;
    }
    return OGL;
}

int main()
{
    int n;cin>>n;
    cout<<Oglindit(n);

    cout<<"\n";
    return 0;
}