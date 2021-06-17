#include<bits/stdc++.h>
using namespace std;

void move_zero_to_end(int a[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
    }
}
int main()
{
    int a[]={10,0,0,5,0,0,6,0,9,9,0,0};
    int size=sizeof(a)/sizeof(a[0]);
    move_zero_to_end(a,size);
    for(int i=0;i<size;i++) cout<<a[i]<<" ";

}