#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int a[],int &n)
{
	cout<<"\n nhap n: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
			
}
int main()
{
	int a[5]={1,2,3,4,5};
	int b[4]={4,5,6,7};
	/*
	for(int i=0;i<5;i++)//lay tung phan tu trong a[i]
		for(int j=0;j<4;j++)//lay tung a[i] so voi tung a[j]
			if(a[i]==b[j])cout<<a[i]<<setw(3);
	*/
	// dua tren viec hai mang da co thu tu
	int i,j;i=j=0;
	while(i<=5 && j<=4)
	{
		if(a[i]<b[j])i++;
		else if(a[i]>b[j])j++;
		else
		{
			cout<<a[i];
			i++;
			j++;
		}
	}
}