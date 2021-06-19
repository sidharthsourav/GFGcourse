#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[],int size)
{
    int profit=0;
    for(int i=1;i<size;i++)
    {
        if(price[i]>price[i-1]) profit=profit+(price[i]-price[i-1]);
    }
    return profit;
}
int main()
{
    
    int array[]={12,89,2,56,89,23,41,55};
    int size=sizeof(array)/sizeof(array[0]);
    int profit=maxProfit(array,size);
    cout<<profit;

}