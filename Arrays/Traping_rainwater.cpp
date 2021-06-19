#include<bits/stdc++.h>
using namespace std;

int rainwater(int arr[],int size)
{
    int res=0;
    int lmax[size],rmax[size];
    lmax[0]=arr[0];
    for(int i=1;i<size;i++) 
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--) 
    {
        rmax[i]=max(arr[i],rmax[i+1]);

    }
    for(int i=1;i<size;i++)
    {
        res=res+(min(rmax[i],lmax[i])-arr[i]);
    }
    return res;

}
int main()
{
    int array[]={12,89,2,56,89,23,41,55};
    int size=sizeof(array)/sizeof(array[0]);
    int result=rainwater(array,size);
    cout<<result;
}