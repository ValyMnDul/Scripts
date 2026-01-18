#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

int main(){
    int a[101][101]={0};
    int n,m,i,j;
    fin>>n>>m;

    for(int k=1;k<=m;k++){
        fin>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<"\n";
    }
    
    return 0;
}