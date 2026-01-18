#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("test.in");

int main(){
    int a[50][50], n;
    fin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }

    cout<<"\nX={ ";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"}";

    cout<<"\nU={";
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i][j]==1){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
    cout<<"}\n\n";

    int d, dt=0;
    for(int i=1;i<=n;i++){
        d=0;
        for(int j=1;j<=n;j++){
            d=d+a[i][j];
        }
        cout<<"d("<<i<<")="<<d;
        if(d==0){
            cout<<"-izolat";
        }
        if(d==1){
            cout<<"-marginal";
        }
        dt=dt+d;
        cout<<"\n";
    }
    cout<<"\ndt="<<dt;


    cout<<"\n";
    return 0;
}