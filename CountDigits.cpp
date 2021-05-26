#include<bits/stdc++.h>
using namespace std;

// Most Efficient method
int CountDigits(long n)
{
    return floor(log10(n)+1);
}
// Naive approach
int DigitCount(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    cout<<CountDigits(123);
}