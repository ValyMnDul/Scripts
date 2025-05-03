#include <iostream>
using namespace std;

int CifraMaxima(int x)
{
    int Max=-1;
    if(x<0)
    {
        x=-x;
    }
    while(x!=0)
    {
        if((x%10)>Max)
        {
            Max=x%10;
        }
        x=x/10;
    }
    return Max;
}
int CifraMinima(int x)
{
    int Min=9;
    if(x<0) 
    {
        x=-x;
    }
    while(x!=0)
    {
        if((x%10)<Min)
        {
            Min=x%10;
        }
        x=x/10;
    }
    return Min;
}

int main()
{
    int n;cin>>n;
    cout<<CifraMaxima(n);
    cout<<"\n";
    cout<<CifraMinima(n);

    cout<<"\n";
    return 0;
}