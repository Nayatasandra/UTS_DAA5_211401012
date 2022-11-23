#include <iostream>
#include <conio.h>
using namespace std;

int n,sorting;

int main(){
	
cout<<"==========================="<<endl;
cout<<"      Mengurutkan NIM"<<endl;
cout<<"==========================="<<endl;
cout<<endl;
cout<<"Masukkan banyak data : ";
cin>>n;

int data[n];
for (int i=0;i<n;i++){
	cout<<"Data ke-"<<i+1<<" : ";
	cin>>data[i];
}
for(int c=1;c<n;c++)
    {
        for (int d=0;d<n-1;d++){
			for (int e=0;e<n-1;e++){
				if (data[e]>data[e+1])
				swap(data[e],data[e+1]);
			}
   		}
	}
	
    cout << endl << "Hasil dari pengurutannya Adalah";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<data[i];
    }
}
