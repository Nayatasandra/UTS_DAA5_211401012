#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct TNode{
    int data;
    TNode *next;
};
TNode *head, *tail;

void init (){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}

void insertDepan(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()==1)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<"Data masuk";
}

void insertBelakang(int data)
{
    TNode *baru;
    baru = new TNode;
    baru->data = data;
    baru->next = NULL;
    if(isEmpty()==1)
    {
       head=baru;
       tail=baru;
       tail->next=NULL;
    }else
    {
    	tail->next=baru;
       	tail=baru;
    }
    cout<<"Data masuk";
}

void hapusDepan()
{
    TNode *hapus;
    int d;
    if (isEmpty()==0)
    {
        if(head!=tail)
        {
            hapus=head;
            d=hapus->data;
            head=head->next;
            delete hapus;
        }else
        {
            d=tail->data;
            head=tail=NULL;
        }
    cout<<d<<" terhapus";
    }
	else cout<<"Masih kosong\n";
}

void hapusBelakang(){
	
    TNode *bantu,*hapus;
    int d;
    if (isEmpty()==0)
    {
    	bantu=head;
        if(head!=tail){
        	while(bantu->next!=tail){
        		bantu=bantu->next;
			}
            hapus=tail;
            tail=bantu;
            d=hapus->data;
            delete hapus;
            tail->next=NULL;
        }
		else{
            d=tail->data;
            head=tail=NULL;
        }
    cout<<d<<" terhapus";
    }
	else cout<<"Masih kosong\n";
}

void tampil(){
    TNode *bantu;
    bantu=head;
        if(isEmpty()==0)
        {
            while(bantu!=NULL)
            {
                cout<<bantu->data<<" ";
                bantu=bantu->next;
            }
        }else cout <<"Masih kosong\n";
}

main()
{
    int pil, databaru,data;
    do
    {
        system("cls");
        cout<<endl;
        cout<<" ============================"<<endl;
        cout<<" =   PROGRAM LINKED LIST    ="<<endl;
        cout<<" ============================"<<endl;
        cout<<" = 1. Insert Depan          ="<<endl;
        cout<<" = 2. Insert Belakang       ="<<endl;
        cout<<" = 3. Delete Depan          ="<<endl;
        cout<<" = 4. Delete Belakang       ="<<endl;
        cout<<" = 5. Tampilan Data         ="<<endl;
        cout<<" = 6. Exit                  ="<<endl;
        cout<<" ============================"<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: system("cls");{
                cout<<"Masukan Data = ";cin>>databaru;
                insertDepan(databaru);
                break;
            }
            case 2: system("cls");{
                cout<<"Masukan Data = ";cin>>data;
                insertBelakang(data);
                break;
            }
            case 3: system("cls");{
                hapusDepan();
                break;
            }
            case 4: system("cls");{
                hapusBelakang();
                break;
            }
            case 5: system("cls");{
                tampil();
                break;
            }
            case 6: system("cls");{
                return 0;
                break;
            }
            default : system("cls");
            {
                cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }
        }
        getch();
    }
    while (pil!=7);
}
