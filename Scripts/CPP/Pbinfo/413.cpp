#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");

int main(){

    int a[101][101]={0},i,j,MAX=-1;

    while(fin>>i>>j){
        if(MAX<i){
            MAX=i;
        }
        if(MAX<j){
            MAX=j;
        }

        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1;i<=MAX;i++){
        for(int j=1;j<=MAX;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<'\n';
    }

    return 0;
}