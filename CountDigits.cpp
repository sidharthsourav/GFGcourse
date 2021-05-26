#include<bits/stdc++.h>
using namespace std;

int CountDigits(long n)
{
    return floor(log10(n)+1);
}
int main()
{
    cout<<CountDigits(123);
}