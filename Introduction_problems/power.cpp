#include<bits/stdc++.h>
using namespace std;

// reccursive solution
int power(int x,int n)
{
    if (n==0) return 1;
    int temp=power(x,n/2);
    temp= temp*temp;
    if(n%2==0) return temp;
    return temp*x;
}

//iterative solution using binary exponentiation
int Power( int x, int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0) res=res*x; // use if(n&1) for more optimization
        x=x*x;
        n=n/2; //n>>1 bits shift operation
    }
    return res;
}
int main()
{

}