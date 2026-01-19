#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("grade.in");
ofstream fout("grade.out");

int main(){

    int a[101][101] = {0},n,i,j,d;

    fin>>n;

    while(fin>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=n;i++){
        d=0;
        for(int j=1;j<=n;j++){
            d=d+a[i][j];
        }
        fout<<d<<" ";
    }

    return 0;
}