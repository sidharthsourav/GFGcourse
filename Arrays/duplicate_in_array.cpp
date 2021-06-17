#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int a[],int size)
{
    int res=1;
    for(int i=1;i<size;i++)
    {
        if(a[i]!=a[res-1])
        {
            a[res]=a[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int a[]={10,10,20,20,20,30,30,30};
    int size=sizeof(a)/sizeof(a[0]);
    int x=remove_duplicate(a,size);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
    

}