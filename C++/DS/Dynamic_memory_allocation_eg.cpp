#include<iostream>
using namespace std;
#include<conio.h>
int sum(int *,int);
int main()
{
    int x,i,sum1;
    cout<<"Enter the size of array: "<<endl;
    cin>>x;
    int *p=new int[x];
    cout<<"Enter the elements: \n";
    for(i=0;i<x;i++)
    {
        cin>>*(p+i);
    }
    sum1=sum(p,x);
    cout<<"The sum of the array: "<<sum1;
    delete []p;
    return 0;
}
int sum(int *p,int x)
{
    int sum=0,i;
    for(i=0;i<x;i++)
    {
        sum+=*(p+i);
    }
    return sum;
}
