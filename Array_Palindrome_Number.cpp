#include<iostream>
#include<string>
using namespace std;
int sodx(int n)
{
	int so=n;
	int sodn=0;
	int sodu=0;
	while(so>0)
	{
		sodu=so%10;
		so=so/10;
		sodn=sodn*10+sodu;
	}
	if(n==sodn)return 1;
	return 0;
}
int main()
{
	int a[3][3]={{9,10,11},{19,22,24},{33,34,35}};
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(a[i][j]>10 && sodx(a[i][j])) 
				cout<<a[i][j]<<" ";
	
	return 0;
}