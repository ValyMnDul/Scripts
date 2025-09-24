#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("permutari.in");
ofstream fout("permutari.out");

int n,v[10];

bool solution(int k){
    if(n==k){
        return true;
    }
    return false;
}

bool verify(int k){
    for(int i=1;i<=k-1;i++){
        if(v[k]==v[i]){
            return false;
        }
    }
    return true;
}

void print(int k){
    for(int i=1;i<=k;i++){
        fout<<v[i]<<" ";
    }
    fout<<'\n';
}

void backtracking(int k){
    for(int i=1;i<=n;i++){
        v[k]=i;
        if(verify(k)){
            if(solution(k)){
                print(k);
            }
            else {
                backtracking(k+1);
            }
        }
    }
}

int main(){

    fin>>n;

    backtracking(1);

    return 0;
}
