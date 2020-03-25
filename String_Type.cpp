#include<iostream>
using namespace std;
int main()
{
	//Khai bao chuoi su dung kieu string
	string s="CNTT";

	//Lay do dai chuoi s dung phuong thuc length:
	cout<<s.length();	
	// tim ky tu trong chuoi s su dung phuong thuc find
	cout<<"\n tim ky tu t trong chuoi s: ";
	cout<<s.find('T',0);
	// doi chuoi sang thuong va hoa su dung thu vien transform
	cout<<"\n chuyen chuoi s thang chu thuong: ";
	std::transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s;
	cout<<"\n chuyen chuoi s thang chu Hoa: ";
	std::transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s;
	// so sanh chuoi su dung phuong thuc compare
	cout<<"\n so sanh chuoi s3 va s2:";
	string s2="C";
	string s3="D";
	cout<<s3.compare(s2);
	return 0;
}