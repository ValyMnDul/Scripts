#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int main(){

    int a[101][101] = {0},i,j,n;
    fin>>n;

    while(fin>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }

    int nrVecini;
    for(int i=1;i<=n;i++){
        nrVecini=0;
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                nrVecini++;
            }
        }
        fout<<nrVecini<<" ";
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                fout<<j<<" ";
            }
        }
        fout<<"\n";
    }

    return 0;
}