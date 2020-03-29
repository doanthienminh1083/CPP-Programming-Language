#include<iostream>

using namespace std;
//cu phap: kieutrave tenham (tham so)
// ham khong gia tri tra ve
void Function_No_Return()
{
	cout<<"\n day la ham khong co gia tri tra ve"<<endl;
}
char Function_Return()
	{
		cout<<"\n day la ham co gia tri tra ve: ";
		return 'C';
	}
int main()
{
	cout<<"\n Function_No_Return: ";
	Function_No_Return();
	cout<<"\n Function_Return: ";
	cout<<Function_Return()<<endl;

	return 0;
}