unsigned int oglindit(unsigned int n){
    unsigned int ogl=0;
    while(n!=0){
        ogl=ogl*10+n%10;
        n=n/10;
    }
    return ogl;
}