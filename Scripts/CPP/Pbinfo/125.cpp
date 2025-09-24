#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

int n,v[9],a[9],aux;

void citire(){
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
}

void sortare(){
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

int solutie(int k){
    return (k==n);
}

int valid(int k){
    for(int i=1;i<=k-1;i++){
        if(v[i]==v[k]){
            return 0;
        }
    }
    return 1;
}

void afisare(int k){
    for(int i=1;i<=k;i++){
        fout<<a[v[i]]<<" ";
    }
    fout<<"\n";
}

void bk(int k){
    for(int i=1;i<=n;i++){
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

    citire();
    sortare();
    bk(1);

    return 0;
}