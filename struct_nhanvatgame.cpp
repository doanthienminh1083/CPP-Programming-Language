#include<iostream>
using namespace std;

/*
	Nhan vat trong game
	name      kieu chuoi
	hitpoint 	so nguyen
	damage		so nguyen
	skill		kieu chuoi
	weapon		vu khi

*/
/* cu phap

	struct ten_cau_truc_tu_tao
	{
		cac thanh phan ben trong	
	};
*/
//dinh nghia 1 kieu du lieu cau truc nhanvat
struct Nhanvat
{
	string name;
	int hitpoint;
	int damage;
	string skill;
	string weapon;
};

void DoWar(Nhanvat nv)
{
	cout<<"\n toi la "<<nv.name<<"\t"<<"co don vi mau la "<<nv.hitpoint;
	cout<<" co do sat thuong la "<<nv.damage<<"\t"<<" co ky nang la "<<nv.skill<<"\t";
	cout<<" vu khi  "<<nv.weapon;
}
void nhapdulieu(Nhanvat &nv)
{
	cout<<"\n nhap ten nhan vat: ";
	getline(cin,nv.name);
	cout<<"\n Nhap don vi mau ";
	cin>>nv.hitpoint;
	cout<<"\n Nhap do sat thuong ";
	cin>>nv.damage; 
	fflush(stdin);//cin.ignore()
	cout<<"\n nhap ky nang nhan vat: ";
	getline(cin,nv.skill);
	cout<<"\n nhap vu khi cho nhan vat: ";
	getline(cin,nv.weapon);
}
int main()
{
	// gan du lieu cho tung thanh phan thuoc tinh
 	Nhanvat nv[3]={
	 	{"babarian",100,100,"chaybo","kiem"},{"Archer",100,100,"ban cung","cung"},{"Goblin",50,100,"gom tainguyen","kiem"}
	 };
 	for(int i=0;i<3;i++)
 		DoWar(nv[i]);
	return 0;
}