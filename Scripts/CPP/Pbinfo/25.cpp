unsigned int cmmnr(unsigned int n){
    short vn[9];
    int nrcif = 0;

    unsigned int cn = n;
    while(cn != 0){
        vn[nrcif++] = cn % 10;
        cn /= 10;
    }

    for(int i = 0; i < nrcif - 1; i++){
        for(int j = i + 1; j < nrcif; j++){
            if(vn[i] > vn[j]){
                short aux = vn[i];
                vn[i] = vn[j];
                vn[j] = aux;
            }
        }
    }

    if(vn[0] == 0){
        for(int i = 1; i < nrcif; i++){
            if(vn[i] != 0){
                short aux = vn[0];
                vn[0] = vn[i];
                vn[i] = aux;
                break;
            }
        }
    }

    unsigned int R = 0;
    for(int i = 0; i < nrcif; i++){
        R = R * 10 + vn[i];
    }

    return R;
}
