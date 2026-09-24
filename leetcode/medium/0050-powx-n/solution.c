double myPow(double x, int n) {
    if(n==0) return (float)1;
    long N=n;
    if(N<0){
        N=-N;
        x=1/x;
    }
    double base=myPow(x,N/2);
    if(n%2==0)
    {
        return base*base;
    }
    else
    {
        return base*base*x;
    }
}