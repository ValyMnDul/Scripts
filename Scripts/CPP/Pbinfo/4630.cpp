#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("saturate.in");
ofstream fout("saturate.out");

int main(){
    int a[101][101]={0},n,m,i,j,ok=0;

    fin>>n>>m;

    for(int k=1;k<=m;k++){
        fin>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][0]=a[i][0]+a[i][j];
        }
        if(n%2==0){
            if(a[i][0]>=(n/2)){
                fout<<i<<" ";
                ok=1;
            }
        }
        else {
            if(a[i][0]>(n/2)){
                fout<<i<<" ";
                ok=1;
            }
        }
    }

    if(ok==0){
        fout<<"Nu exista";
    }

    return 0;
}