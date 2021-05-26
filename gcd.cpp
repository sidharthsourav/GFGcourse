#include<bits/stdc++.h>
using namespace std;

// naive gcd
int gcd_naive(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0) break;
        res--;
    }
    return res;
}
// Euclidian GCD
int e_gcd(int a,int b)
{
    while(a!=b)
    {
        if (a>b) a=a-b;
        b=b-a;
    }
    return a;
}
// Optimized Euclidian GCD
int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    cout<<gcd_naive(100,200)<<" "<<e_gcd(100,200)<<" "<<gcd(100,200);
}