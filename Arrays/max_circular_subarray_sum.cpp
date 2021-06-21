#include<bits/stdc++.h>
using namespace std;

int max_subarray_sum(int arr[],int size)
{
    int res=arr[0];
    int max_ending=arr[0];
    for(int i=1;i<size;i++)
    {
        max_ending=max(arr[i],max_ending+arr[i]);
        res=max(res,max_ending);
    }
    return res;
}
int sum_subarray(int arr[],int size)
{
    int normal_sum=max_subarray_sum(arr,size);
    if(normal_sum<0) return normal_sum;
    int array_sum=0;
    for(int i=0;i<size;i++)
    {
        array_sum=array_sum +arr[i];
        arr[i]=-arr[i];
    }
    int circular_sum=array_sum+max_subarray_sum(arr,size);
    return max(normal_sum,circular_sum);
}
int main()
{
    int array[]={8,-4,3,-5,4};
    int size=sizeof(array)/sizeof(array[0]);
    int res=sum_subarray(array,size);
    cout<<res;
}