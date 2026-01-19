#include <iostream>

using namespace std;

int main(){

    int a[101][101]={0},n,valoare=1;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]!=0 && a[i][j]!=1){
                valoare=0;
            }
        }
    }

    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i][j]!=a[j][i]){
                valoare=0;
            }
        }
    }

    for(int i=1;i<=n;i++){
        if(a[i][i]==1){
            valoare=0;
        }
    }

    cout<<valoare;

    return 0;
}