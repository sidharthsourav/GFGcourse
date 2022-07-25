#include<bits/stdc++.h>
using namespace std;

void left_rotate(int arr[],int d,int size)
{
    vector <int> v(d,0);
    for(int i=0;i<d;i++)  v[i]=arr[i];
    for(int i=d;i<size;i++)  arr[i-d]=arr[i];
    for(int i=0;i<d;i++) arr[size-d+i]=v[i];

}

// more efficient solution in time complexity of O(n) and space complexity O(1)
//main idea is reverse til d elements first then reverse rest elements
// then reverse the whole array

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotate(int arr[],int d,int size)
{
    reverse(arr,0,d-1);
    reverse(arr,d,size-1);
    reverse(arr,0,size-1);

}


int main()
{
    int a[]={1,2,3,4,5,6,7};
    int size=sizeof(a)/sizeof(a[0]);
    //left_rotate(a,3,size);
    rotate(a,3,size);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
}