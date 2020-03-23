#include<iostream>
#include<iomanip>
using namespace std;
void InputArray(int a[10],int &n)
{
	cout<<"\n nhap so phan tu cua mang: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
}
void OutputArray(int a[10],int n)
{
	for(int i=0;i<n;i++)
		cout<<setw(3)<<a[i];
}
int main()
{
	int a[10];
	int n;
	// Input a Array
	InputArray(a,n);
	// Output a Array
	OutputArray(a,n);
	cout<<endl;
	return 0;
}