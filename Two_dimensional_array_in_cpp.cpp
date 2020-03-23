
#include<iostream>

using namespace std;

void xuat(int a[][10],int dong,int cot)
{
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		for(int j=0;j<2;j++)
			cout<<a[i][j]<<"  ";
	}
}
void nhap(int a[][10],int dong,int cot)
{
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
}
int main()
{
	int a[10][10];
	
	//Input array
	nhap(a,3,2);
	//Ouput array
	xuat(a,3,2);
	
	cout<<endl;		
	return 0;
}