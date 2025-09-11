#include <iostream>
using namespace std;
int main(void){

    unsigned short x,y,a,z,h;
    unsigned int n;

    cin>> x >>y>>n;
    a=n/(x*y);
    n=n%(x*y);
    z=n/y;
    n=n%y;
    h=n;

    cout<<a<<'\n'<<z<<'\n'<<h;

    return 0;
}