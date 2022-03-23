#include<iostream>
#include<conio.h>
using namespace std;

class Bayar{
	friend ostream& operator<<(ostream&, const Bayar&);
	friend istream& operator>>(istream&, Bayar&);
public:
	Bayar();
	void bayar(){
		jumlah = (a*ag) + (b*ab);}
	void diskonan(){
		if (jumlah >= 45000){
		diskon =(jumlah*10)/100;}
		}
	void jumlah_total(){
		total_harga = (jumlah - diskon);}

private:
	int ag = 17000;
	int ab = 21000;
	int a,b;
	int jumlah;
	int diskon;
	int total_harga;
};

Bayar::Bayar(){
	cout<<"Pilihan Menu : \n";
	cout<<"1. Ayam Goreng	Rp. 17.000\n";
	cout<<"2. Ayam Bakar	Rp. 21.000\n\n";
}
istream& operator>>(istream& in, Bayar& masukan){
	cout<<"Masukkan pesanan ayam goreng : ";
	in >>masukan.a;
	cout<<"Masukkan pesanan ayam bakar : ";
	in >>masukan.b;

	return in;
}
ostream& operator<<(ostream& out,const Bayar& keluaran){
	out<<"================================\n";
	out<<"Harga : "<<keluaran.jumlah<<endl;
	out<<"Diskon : "<<keluaran.diskon<<endl;
	out<<"Total Harga : "<<keluaran.total_harga<<endl;
	return out;
}

int main(){
	Bayar X;
	cin>>X;
	X.bayar();
	cout<<X;
	X.diskonan();
	cout<<X;
	X.jumlah_total();
	cout<<X;
	getch();
	return 0;
}
