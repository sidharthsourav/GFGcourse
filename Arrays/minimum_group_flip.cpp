#include<bits/stdc++.h>
using namespace std;

int print_groups(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0]) cout<<"From : "<<i<<" to ";
            else cout<<(i-1)<<endl;
        }
    }
    if (arr[size-1]!=arr[0]) cout<<(size-1)<<endl;
}
//output will be 0 based indexed array.
int main()
{
    int array[]={1,0,1,0,1,1,1,1,1,0,0,0,1,0,1,0,1};
    int size=sizeof(array)/sizeof(array[0]);
    print_groups(array,size);
}