#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	queue<string> q;
	string nama;
	int n;

	cout<<"           ANTRIAN PASIEN RUMAH SAKIT C"<<endl;
	cout<<"           ****************************"<<endl;
	cout<<endl;
	
	cout<<"Masukkan jumlah antrian : ";cin>>n;
	cout<<endl;
	
	for (int i=0;i<n;i++){
		cout<< "Nama Pasien ke-"<<i+1<<" : ";
		cin>>nama;
		q.push(nama);
	}
	cout<<endl;
	do
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	while (q.size() != 0);
	cout<<endl;
	
	return 0;
}
