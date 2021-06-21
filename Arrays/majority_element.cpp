#include<bits/stdc++.h>
using namespace std;

int majority(int arr[],int size)
{
    int res=0,count=1;
    for (int i=1;i<size;i++)
    {
        if(arr[res]==arr[i]) count++;
        else 
        {
            count--;
        }
        if(count==0) 
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[res]==arr[i]) count++;
    }
    if (count<=size/2) res=-1;

    return res;

}
// it return 0 based array index.
int main()
{
    int array[]={6,8,4,8,8};
    int size=sizeof(array)/sizeof(array[0]);
    int res=majority(array,size);
    cout<<array[res];
}
