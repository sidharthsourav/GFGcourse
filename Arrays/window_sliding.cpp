#include<bits/stdc++.h>
using namespace std;

// this approch works on fixed sixe sub arrays
int max_subarray_sum(int arr[],int size,int k) // k=window size
{
    int current_sum=0;
    for(int i=0;i<k;i++)
    {
        current_sum+=arr[i];
    }
    int max_sum=current_sum;
    for(int i=k;i<size;i++)
    {
        current_sum+=(arr[i]-arr[i-k]);
        max_sum=max(current_sum,max_sum);
    }
    return max_sum;
}
int main()
{
    int array[]={12,-89,2,56,89,-23,41,-55};
    int size=sizeof(array)/sizeof(array[0]);
    int max_sum=max_subarray_sum(array,size,3);
    cout<<max_sum;    
}