#include <iostream>
using namespace std;
int main(){
    int n,nr;
    int MAX=-200000000;
    cin>>n;
    while(n){
        cin>>nr;
        if(MAX<nr){
            MAX=nr;
        }
        n=n-1;
    }

    cout<<MAX;

    return 0;
}