#include <iostream>
using namespace std;

float MediaAritmeticaACifrelor(int x)
{
    float Numarator=0;
    float Numitor=0;
    while(x!=0)
    {
        Numarator=Numarator+x%10;
        Numitor++;
        x=x/10;
    }

    return Numarator/Numitor;
}

int main()
{
    cout<<MediaAritmeticaACifrelor(212);
    cout<<"\n";
    return 0;
}