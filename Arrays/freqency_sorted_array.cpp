#include<bits/stdc++.h>
using namespace std;

void printfrequency(int a[],int size)
{
    int freq=1,i=1;
    while(i<size)
    {
        while(i<size && a[i]==a[i-1])
        {
            freq++;
            i++;
        }
        cout<<a[i-1]<<" : "<<freq<<endl;
        i++;
        freq=1;
    }
    if(size==1 ||a[size-1]!=a[size -2]) cout<<a[size -1]<<" : "<<" 1";


}
int main()
{
    int array[]={10,10,10,10,20,20,20,30,40,40};
    int size=sizeof(array)/sizeof(array[0]);
    printfrequency(array,size);
}