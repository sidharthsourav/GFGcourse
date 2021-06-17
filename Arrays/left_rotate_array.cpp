#include<bits/stdc++.h>
using namespace std;

void left_rotate(int arr[],int d,int size)
{
    vector <int> v(d,0);
    for(int i=0;i<d;i++)  v[i]=arr[i];
    for(int i=d;i<size;i++)  arr[i-d]=arr[i];
    for(int i=0;i<d;i++) arr[size-d+i]=v[i];

}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(a)/sizeof(a[0]);
    left_rotate(a,3,size);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
}