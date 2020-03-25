#include<iostream>
using namespace std;
void xuat(int a[][3],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<m;j++)
			cout<<a[i][j];	
	}

}
int songuyento(int n)
{
	int t=1;
	for(int i=2;i<n;i++)
		if(n%i==0)t=t+1;
	if(t>=2)return 0;
	return 1;
}
int main()
{
	int a[3][3]={{3,12,6},{7,9,10},{8,2,11}};
	cout<<"\n mang da nhap:";
	xuat(a,3,3);
	cout<<endl;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if((i==j)&&(songuyento(a[i][j])==1))cout<<a[i][j]<<" ";
	
}