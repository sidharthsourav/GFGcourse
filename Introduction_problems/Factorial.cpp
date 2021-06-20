#include<bits/stdc++.h>
using namespace std;

long long IterativeFactorial(int n)
{
    long long result=1;
    for(int i=2;i<=n;i++) result=result*i;
    return result;
}
int RecursiveFactorial(int n)
{
    if (n==0) return 1;
    return n*RecursiveFactorial(n-1);
}
// effetient approach O(logn) and doesn't give the buffer overflow problem
int CountTrailingZeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5) res=res+(n/i);
    return res;
}

int main()
{
    cout<<IterativeFactorial(15)<<" ";
    cout<<RecursiveFactorial(5)<<" ";
    cout<<CountTrailingZeros(15);
}