#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("izolate.in");
ofstream fout("izolate.out");

int main(){

    int a[101][101]={0},n,i,j,m=0;
    fin>>n;

    while(fin>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][0]=a[i][0]+a[i][j];
        }
        if(a[i][0]==0){
            m++;
        }
    }

    fout<<m<<" ";

    for(int i=1;i<=n;i++){
        if(a[i][0]==0){
            fout<<i<<" ";
        }
    }

    return 0;
}