#include<iostream>
#include<array>
using namespace std;
int binarySerach(int *aa ,int s ,int e)
{
    int start=0,end=s-1, mid=(start+end)/2;
    while(start<end)
    {if(aa[mid]==e)
    {return mid+1;}
    else if(aa[mid]>e)
    {end=mid;
    mid=(start+end)/2;}
    else
    {start=mid;
    mid=(start+end)/2;}}
    return -1;
    
}
int main()
{
    int size,element;
    int a[]={1,4,7,10,44,300,666,999,1000};
    size=sizeof(a)/sizeof(int);
    element=666;
    int p= binarySerach(a,size,element);
    cout<<p;

}