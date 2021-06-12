#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int Pow(int x, int n)
{
    if (n==1)
        return x%mod;
    int temp = Pow(x,n/2);
    return (n&1) ? temp*temp*x : temp*temp;
}

int main()
{
    int a = 5, n = 2;
    cout << Pow(5,1);
    return 0;
}