#include<iostream>
#include<iomanip>
using namespace std;

void nhapmt(int a[][2],int &n)
{
	do{
		cout<<"\n nhap so dong va cot ma tran vuong cung cap:";
		cin>>n;
	}while(n<3);

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]:";
				cin>>a[i][j];
			}
}
void xuatmt(int a[][2],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<n;j++)
			{
				cout<<setw(5)<<a[i][j];
			}
	}
}

int main()
{
	
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{3,4},{5,6}};
	int c[2][2];
	
	cout<<"\n tong 2 ma tran:";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			c[i][j]=a[i][j]+b[i][j];

	cout<<"\n xuat ket qua cua mang:";
	xuatmt(c,2);
	cout<<"\n Hieu 2 ma tran:";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			c[i][j]=a[i][j]-b[i][j];

	cout<<"\n xuat ket qua hieu cua 2 ma tran:";
	xuatmt(c,2);
	cout<<"\n tich 2 ma tran:";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<2;k++)
			c[i][j]=c[i][j]+ a[i][k]*b[k][j];
		}	
	cout<<"\n xuat ket qua cua mang:";
	xuatmt(c,2);

	
	return 0;
}