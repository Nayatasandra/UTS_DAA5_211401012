#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct biodata{
	string nama[30];
    string nim[10];
    string fakultas[20];
    string prodi[20];
};

int main(){
	
	int n;
	biodata mahasiswa;
	
	cout<<"============================================"<<endl;
	cout<<"      Mengurutkan Data berdasarkan NIM"<<endl;
	cout<<"============================================"<<endl;
	cout<<endl;
	cout<<"Masukkan banyak data : ";
	cin>>n;

	for (int i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Nama : ";
		cin>> mahasiswa.nama[i];
		cout<<"NIM : ";
		cin>>mahasiswa.nim[i];
		cout<<"Fakultas : ";
		cin>>mahasiswa.fakultas[i];
		cout<<"Prodi : ";
		cin>>mahasiswa.prodi[i];
	}
	
	for (int i=1; i<n; i++) {
		for (int j=n-1; j>=i; j--) {
			if (mahasiswa.nim[j] < mahasiswa.nim[j-1]) {
				swap (mahasiswa.nama[j], mahasiswa.nama[j-1]);
				swap (mahasiswa.nim[j], mahasiswa.nim[j-1]);
				swap (mahasiswa.fakultas[j], mahasiswa.fakultas[j-1]);
				swap (mahasiswa.prodi[j], mahasiswa.prodi[j-1]);
			}
		}
	}
	
	system("cls");
	
    cout << endl << "Hasil dari pengurutannya Adalah"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Data ke-"<<i+1<<endl;
		cout<<"Nama : "<<mahasiswa.nama[i]<<endl;
		cout<<"NIM : "<<mahasiswa.nim[i]<<endl;
		cout<<"Prodi : "<<mahasiswa.fakultas[i]<<endl;
		cout<<"Prodi : "<<mahasiswa.prodi[i]<<endl;
	}
	
	return 0;
}
