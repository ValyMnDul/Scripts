#include <iostream>
using namespace std;

bool Paritate(int x)
{
    if(x%2==0) return true;
    else return false;
}

int main()
{
    int n;cin>>n;
    cout<<Paritate(n);

    cout<<"\n";
    return 0;
}