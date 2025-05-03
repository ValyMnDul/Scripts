#include <iostream>
using namespace std;

int UltimaCifra(int x)
{
    return x%10;
}

int main()
{
    cout<<UltimaCifra(432);
    cout<<"\n";
    return 0;
}