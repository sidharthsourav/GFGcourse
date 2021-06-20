#include<bits/stdc++.h>
using namespace std;
  
  // method to print all prime numbers beetween 0 and N with time complexity of O(nloglogn)
void seive(int n)
{
    vector <bool> primeArray(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(primeArray[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i) primeArray[j]=false;
        }
    }
}
int main()
{
    seive(51);
}