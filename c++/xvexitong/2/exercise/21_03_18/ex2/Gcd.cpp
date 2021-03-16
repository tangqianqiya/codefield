int gcd(int m,int n)
{
    int t;
    while(t = m % n)
    {
        m = n;
        n = t;
    }
    return n;
}
