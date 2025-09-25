#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sirpie.in");
ofstream fout("sirpie.out");

int n,v[10],a[10],aux;

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

int primeintreele(int x,int y){
    if(x==0||y==0){
        return 0;
    }

    if(x<0){
        x=-x;
    }

    if(y<0){
        y=-y;
    }

    while(x!=y){
        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    if(x==1){
        return 1;
    }
    else{
        return 0;
    }
}

int solutie(int k){
    if(k==n){
        return 1;
    }
    return 0;
}

int valid(int k){
    for(int i=1;i<=k-1;i++){
        if (v[i] == v[k]) {
            return 0;
        }
    }
    if (k > 1 && !primeintreele(a[v[k-1]], a[v[k]])) {
            return 0;
        }
    return 1;
}

void afisare(int k){
    for(int i=1;i<=k;i++){
        fout<<a[v[i]]<<' ';
    }
    fout<<'\n';
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

void citire(){
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
}

int main(){
    
    fin>>n;

    citire();
    sortare();
    bk(1);

    return 0;
}