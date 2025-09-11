int fact(int n){
    int F = 1;
    for (int i = n; i >= 2; i--)
    {
        F = F * i;
    }
    return F;
}
