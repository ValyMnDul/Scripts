#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gradmax.in");
ofstream fout("gradmax.out");

int main(){

    int a[101][101]={0},n,i,j,m=0,dm=-1;

    fin>>n;

    while(fin>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][0]=a[i][0]+a[i][j];
        }
        if(dm<a[i][0]){
            dm=a[i][0];
        }
    }

    for(int i=1;i<=n;i++){
        if(a[i][0]==dm){
            m++;
        }
    }

    fout<<m<<" ";

    for(int i=1;i<=n;i++){
        if(a[i][0]==dm){
            fout<<i<<" ";
        }
    }

    return 0;
}