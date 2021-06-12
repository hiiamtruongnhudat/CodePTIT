#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long Pow(long long x, long long n)
{
    if (n==1)
        return x%mod;
    long long tmp = Pow(x,n/2);
    return (n&1) ?  (tmp*tmp%mod)* x % mod : (tmp * tmp % mod);
}
long long reverseNumber(long long n)
{   
    long long rem, reverse =0;
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    } 
    return reverse;
}
int main()
{
    int t; cin >> t;
    while ( t-- )
    {
        long long n; cin >> n;
        long long k = reverseNumber(n);
        cout << Pow(n,k) << "\n";
    }
    return 0;
}