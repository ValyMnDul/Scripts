#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("permutari1.in");
ofstream fout("permutari1.out");

int v[9],n;

int solutie(int k){
    return (k==n);
}

int valid(int k){
    for(int i=1;i<=k-1;i++){
        if(v[k]==v[i]){
            return 0;
        }
    }
    return 1;
}

void afisare(int k){
    for(int i=1;i<=k;i++){
        fout<<v[i]<<" ";
    }
    fout<<'\n';
}

void bk(int k){
    for(int i=n;i>=1;i--){
        v[k]=i;
        if(valid(k)){
            if(solutie(k)){
                afisare(k);
            }
            else{
                bk(k+1);
            }
        }
    }
}

int main(){
    fin >> n;
    bk(1);
    return 0;
}