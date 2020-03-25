#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhapmang(int a[10],int &n)
{

	for(int i=0;i<n;i++)
	{
		cout<<"\n nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
}
void xuatmang(int a[10],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i];
}
int minmax(int a[],int n,int &min,int &max)
{
	min=max=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	
}
bool kiemtrasochinhphuong(int gt)
{
/*	if(sqrt((float)gt)==(int)sqrt((float)gt))
		return true;
	return false;
*/
	if(sqrt((float)gt)==(int)sqrt((float)gt))
		return true;
	return false;
	
}
int main()
{
	int a[10];
	int n;
	cout<<"\n nhap n: ";
	cin>>n;
//	nhapmang(a,n);
//	xuatmang(a,n);
	//int min,max;
	//minmax(a,n,min,max);
	//cout<<"\n gia tri min la:"<<min<<" \n gia tri max la:"<<max;
	int *p;
	p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cout<<"\n nhap phan tu thu "<<i<<": ";
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i];
	}
	int *psocp,socp=0;
	for(int i=0;i<n;i++)
	{
		if(kiemtrasochinhphuong(p[i])==true )socp++;
	}
	cout<<"\n co tat ca "<<socp<<" trong mang p \n";
	psocp=new int[socp];
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(kiemtrasochinhphuong(p[i])==true)
		{
			psocp[dem]=p[i];
			dem++;
		}
	}
	for(int i=0;i<dem;i++)
	{
		cout<<setw(5)<<psocp[i];
	}
}