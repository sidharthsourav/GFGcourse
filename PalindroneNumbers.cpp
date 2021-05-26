#include<bits/stdc++.h>
using namespace std;

bool PalindroneCheck(int n)
{
    int rev=0; 
    int number=n;    // rev will be the reverse of number
    while(n!=0)
    {
        int x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    return (rev==number);
}
int main()
{
    cout<<PalindroneCheck(78987);
}