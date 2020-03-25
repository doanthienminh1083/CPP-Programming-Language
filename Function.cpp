#include<iostream>
using namespace std;
void Func_No_Return()
{
	cout<<"\n Function with no argument and no return value  ";
}
int Func_Returns_a_Val()
{
	cout<<"\n Function with no arguments but returns a value   ";
	return 0;
}
void Func_Arguments(string &s)
{
	
	string s2="Function with arguments but no return value  ";
	s=s2;

}
string  Func_With_Vals_And_Return_a_Val(string s)
{
	string s2=" And Return a value ";
	s.append(s2);
	return s;
}
int main()
{
	
	// Ham khong co doi so tra ve va khong co tham so
		Func_No_Return();
	// Ham khong co doi so tra ve va khong co tham so
		int t=Func_Returns_a_Val();
	// Ham khong co doi so tra ve va  co tham so
		string s;
		Func_Arguments(s);
		cout<<"\n"<<s<<endl;
		
	// ham co doi so tra ve va co tham so
		string s3="Function with arguments" ;
		cout<<Func_With_Vals_And_Return_a_Val(s3)<<endl;
		
	
	return 0;
}