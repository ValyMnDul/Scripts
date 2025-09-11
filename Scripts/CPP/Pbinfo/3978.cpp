#include <iostream>
using namespace std;
int main(){
    
    unsigned short a,b,c;
    cin>>a>>b>>c;

    cout<<((a+b)*(b-a+1))/2<<" "<<((b+c)*(c-b+1))/2<<" "<<((a+c)*(c-a+1))/2;

    return 0;
}