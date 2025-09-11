int nrmaxim(int n){
    int nrcifre=0, cn=n;
    while(cn!=0){
        nrcifre++;
        cn/=10;
    }

    int MAX=n;
    int putere = 1;
    for(int j=1;j<nrcifre;j++) {
        putere = putere * 10;
    }

    for(int i=0;i<nrcifre;i++){
        if(n>MAX) MAX=n;

        int prima = n / putere;
        int rest = n % putere;
        n = rest * 10 + prima; 
    }
    return MAX;
}
