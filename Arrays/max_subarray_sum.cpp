#include<bits/stdc++.h>
using namespace std;

int max_subarray_sum(int a[],int size)
{
    int res=a[0];
    int max_ending=a[0];
    for(int i=1;i<size;i++)
    {
        max_ending=max(max_ending+a[i],a[i]);
        res=max(max_ending,res);
    }
    return res;

}
int main()
{
    int array[]={12,-89,2,56,89,-23,41,-55};
    int size=sizeof(array)/sizeof(array[0]);
    int res=max_subarray_sum(array,size);
    cout<<res;

}