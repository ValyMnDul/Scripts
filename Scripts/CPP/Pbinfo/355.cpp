#include <iostream>
using namespace std;
int main(){
    int n,nr;
    int MIN=200000000;
    cin>>n;
    while(n){
        cin>>nr;
        if(MIN>nr){
            MIN=nr;
        }
        n=n-1;
    }

    cout<<MIN;

    return 0;
}