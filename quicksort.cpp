#include<iostream>
#include<iomanip>
using namespace std;
void Hoanvi(int &a,int &b)
{
	int t=a;a=b;b=t;
}
void quicksort(int a[10],int l,int r)
{
	int x,i,j;
	int m=(l+r)/2;
	x=a[m];
	i=l;j=r;
	do
	{
		while(a[i]<x)i++;
		while(a[j]>x)j--;
		if(i<=j)
		{
			Hoanvi(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(j>l)quicksort(a,l,j);
	if(i<r)quicksort(a,i,r);
}

void In(int a[10],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<setw(5)<<a[i];
	}
}
int main()
{
	int a[11]={
		10,2,1,3,9,5,7,8,2,1,4
	};
	quicksort(a,0,10);
	In(a,11);
	
}