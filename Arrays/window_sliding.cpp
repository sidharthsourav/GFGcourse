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
// finding a subarray whose sum is provided using window sliding technique
// this works only on positive array elements array consists of positive values only
bool subarray_sum_checker(int arr[],int size,int sum)
{
    int current_sum=arr[0],start=0;
    for(int i=1;i<=size;i++)
    {
        while(current_sum>sum && start<i-1)
        {
            current_sum-=arr[start];
            start++;
        }
        if(current_sum==sum) return true;
        if(i<size) current_sum+=arr[i];

    }
    return (current_sum==sum);
}

int main()
{
    int array[]={12,-89,2,56,89,-23,41,-55};
    int size=sizeof(array)/sizeof(array[0]);
    int max_sum=max_subarray_sum(array,size,3);
    int array1[]={12,89,2,56,89,23,41,55};
    int size1=sizeof(array)/sizeof(array[0]);   
    bool res=subarray_sum_checker(array1,size1,147) ;
    cout<<max_sum<<" "<<res;    
}