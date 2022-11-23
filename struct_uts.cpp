#include <iostream>
#include <string>
using namespace std;

struct data{
	string nama;
	string asal;
	int umur;
};
struct jenis{
	int kode;
	string nama_kamar;
};

int main(){
	
int jlh_kmr,jlh_hari,harga,disc,total,bayar;	
	
	cout<<"     SELAMAT DATANG DI HOTEL SUN"<<endl;
	cout<<"     ***************************"<<endl;
	cout<<endl;
	cout<<"Kode kamar   Nama Kamar    Harga Kamar"<<endl;
	cout<<"    101       Superior     RP   400.000"<<endl;
	cout<<"    102       Deluxe       RP   600.000"<<endl;
	cout<<"    103       Family       RP   900.000"<<endl;
	cout<<"    104       Suite        RP 1.200.000"<<endl;
	cout<<endl;
	cout<<"Silahkan isi data di bawah ini "<<endl;
	data pemesan;
	jenis kamar;
	cout<<"Nama             : ";cin>>pemesan.nama;
	cout<<"Asal             : ";cin>>pemesan.asal;
	cout<<"Usia             : ";cin>>pemesan.umur;
	cout<<"Kode kamar       : ";cin>>kamar.kode;
	cout<<"Jumlah kamar     : ";cin>>jlh_kmr;
	cout<<"Jumlah hari      : ";cin>>jlh_hari;
	
	if (kamar.kode==101){
		cout<<"Kode kamar  : 101"<<endl;
		cout<<"Nama kamar  : Superior"<<endl;
		cout<<"Harga kamar : RP 400.000"<<endl;
		harga = 400000;
	}
	else if (kamar.kode==102){
		cout<<"Kode kamar  : 102"<<endl;
		cout<<"Nama kamar  : Deluxe"<<endl;
		cout<<"Harga kamar : RP 600.000"<<endl;
		harga = 600000;
	}
	else if (kamar.kode==103){
		cout<<"Kode kamar  : 103"<<endl;
		cout<<"Nama kamar  : Family"<<endl;
		cout<<"Harga kamar : RP 900.000"<<endl;
		harga = 900000;
	}
	else if (kamar.kode==104){
		cout<<"Kode kamar  : 104"<<endl;
		cout<<"Nama kamar  : Suite"<<endl;
		cout<<"Harga kamar : RP 1.200.000"<<endl;
		harga = 1200000;
	}
	else {
		cout<<"Kode kamar yang Anda pilih tidak tersedia ";
		return 0;
	}
	
	total = harga*jlh_kmr*jlh_hari;
	if (total>=2000000){
		disc=total*0.4;
	}
	else if (total>=1200000){
		disc=total*0.2;
	}
	else {
		disc = 0;
	}
	int hrg_akhir = total-disc;
	cout<<"------------------------------------------"<<endl;
	cout<<"Jumlah harga         : "<<total<<endl;
	cout<<"Harga setelah diskon : "<<hrg_akhir<<endl;
	cout<<"Pembayaran           : ";cin>>bayar;
	cout<<"Pengembalian         : "<<bayar-hrg_akhir<<endl;
	cout<<endl;
	cout<<"            TERIMA KASIH"<<endl;
	cout<<"     ***************************"<<endl;
}
