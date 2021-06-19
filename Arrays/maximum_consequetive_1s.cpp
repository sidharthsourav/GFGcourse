#include<bits/stdc++.h>
using namespace std;

int max1s(int a[],int size)
{
    int current=0,res=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0) current=0;
        else
        {
            current++;
            res=max(res,current);
        }

    }
    return res;
}
int main()
{
    int array[]={0,0,1,1,1,0,1,0,0,1,1,1,1,1,0,1};
    int size=sizeof(array)/sizeof(array[0]);
    int result=max1s(array,size);
    cout<<result;
}