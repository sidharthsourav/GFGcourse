#include<bits/stdc++.h>
using namespace std;

int maximum_diffrence(int a[],int size)
{
    int minimum=a[0];
    int diff=a[1]-a[0];
    for (int i = 1; i <size ; i++)
    {
        diff=max(diff,a[i]-minimum);
        minimum=min(minimum,a[i]);

    }
    return diff;
}
int main()
{
    int array[]={2,3,10,6,4,8,1};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<maximum_diffrence(array,size);
}