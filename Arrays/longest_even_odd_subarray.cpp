#include<bits/stdc++.h>
using namespace std;

int even_odd_subarray(int arr[],int size)
{
    int res=1,current=1;
    for(int i=1;i<size;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            current++;
            res=max(res,current);
        }
        else current=1;
    }
    return res;
}
int main()
{
    int array[]={5,10,20,6,3,8};
    int size=sizeof(array)/sizeof(array[0]);
    int result=even_odd_subarray(array,size);
    cout<<result;
}