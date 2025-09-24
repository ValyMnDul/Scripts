#include <iostream>
using namespace std;

int a,b,v[10];

int solutie(int k){
    return (k==(b-a)+1);
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
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

void bk(int k){
    for(int i=a;i<=b;i++){
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
    cin>>a>>b;
    bk(1);
    return 0;
}
