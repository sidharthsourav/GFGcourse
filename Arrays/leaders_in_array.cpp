#include<bits/stdc++.h>
using namespace std;

void leaders_array(int a[],int size)
{
    
    int leader=a[size-1];
    cout<<a[size-1]<<" ";
    for(int i=size-2;i>=0;i--)
    {
        if(a[i]>leader)
        {
            cout<<a[i]<<" ";
            leader=a[i];
        }
    }
}

int main()
{
    int array[]={7,10,4,10,6,5,2};
    int size=sizeof(array)/sizeof(array[0]);
    leaders_array(array,size);
}