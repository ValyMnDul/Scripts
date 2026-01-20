#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gradek.in");
ofstream fout("gradek.out");

int main(){

    int a[101][101]={0},n,k,i,j,p=0;

    fin>>n>>k;

    while(fin>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }

    int gk=0;
    for(int i=1;i<=n;i++){
        gk=gk+a[k][i];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][0]=a[i][0]+a[i][j];
        }
        if(a[i][0]==gk){
            p++;
        }
    }

    fout<<p<<"\n";

    for(int i=1;i<=n;i++){
        if(a[i][0]==gk){
            fout<<i<<" ";
        }
    }

    return 0;
}