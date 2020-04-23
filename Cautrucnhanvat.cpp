#include<iostream>
using namespace std;
/*
		kieu du lieu tu tao cu phap
		struct Ten_kieu_Du_lieu_Cau_truc
		{
			cac thanh phan thuoc tinh cua kieu du lieu cau truc
		};
*/
//luu tru kieu du lieu nhan vat
	/* nhanvat 
		ten nhan vat	kieu chuoi
		Hitpoint 		so nguyen nhom mau
		damage   		so thuc do sat thuong
		weapons	 		kieu chuoi
	*/
struct nhanvat
{
	char name[20];
	int hitpoint;
	float damage;
	string weapons;
};
void nhap(nhanvat &x)
{
	cout<<"\n nhap ten nhan vat game: ";
	cin.getline(x.name,20);
	cout<<"\n nhap don vi mau nhan vat game: ";
	cin>>x.hitpoint;
	cout<<"\n nhap do sat thuong  nhan vat game: ";
	cin>>x.damage;
	fflush(stdin);//cin.ignore()
	cout<<"\n nhap vu khi nhan vat game: ";
	getline(cin,x.weapons);
}
void xuat(nhanvat x)
{
	cout<<"\n toi la "<< x.name<<"\t";
	cout<<" co don vi mau "<<x.hitpoint<<"\t";
	cout<<" co do sat thuong "<<x.damage<<"\t";	
	cout<<" su dung "<<x.weapons<<"\t";	
}
int main()
{
	// khai bao bien su dung kieu cau truc nhanvat va gan du lieu
	nhanvat golem={"Golem",3000,100,"Khong co"};
	cout<<"\n Thong tin cua chien binh nguoi da"<<endl;
	xuat(golem);
	
	//truy xuat cac thanh phan thuoc tinh kieu du lieu cau truc nhanvat
	//	 muc dich gan du lieu cho tung thanh phan thuoc tinh
	strcpy(golem.name,"Golem");
	golem.hitpoint=3000;
	golem.damage=200;
	golem.weapons="tay khong";

	cout<<"\n Thong tin nhan vat barbarian"<<endl;
	nhanvat barbariant;
	nhap(barbariant);
	xuat(barbariant);
	
	return 0;
}