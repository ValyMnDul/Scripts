unsigned int sumfactcif(unsigned int input){
    if(input==0){
        return 1;
    }
    short cif;
    unsigned int S=0,F;
    while(input!=0){
        F=1;
        cif=input%10;
        for(int i=cif;i>=2;i--){
            F=F*i;
        }
        S=S+F;
        input=input/10;
    }
    return S;
}