#include<bits/stdc++.h>
using namespace std;

int IterativeFactorial(int n)
{
    int result=1;
    for(int i=2;i<=n;i++) result=result*i;
    return result;
}
int RecursiveFactorial(int n)
{
    if (n==0) return 1;
    return n*RecursiveFactorial(n-1);
}

int main()
{
    cout<<IterativeFactorial(5)<<" ";
    cout<<RecursiveFactorial(5);
}