#include <iostream>
#include <conio.h>
#include <math.h>
#include "function.h"
using namespace std;

void header(){
	cout<<"====================================="<<endl;
	cout<<"menghitung Volume Kerucut dan Tabung "<<endl;
	cout<<"====================================="<<endl;
}

int main()
{
system("cls");
tabung bung;
kerucut cut;

bangun_ruang_sisi_lengkung *list[2];
list[1]=&bung;
list[2]=&cut;

	int pilih;
	char ulang;
	do{
		system("cls");
		  header();
		  cout<<"1) Tabung\n";
		  cout<<"2) Kerucut\n";
		  cout<<"masukkan pilihan:";
		  cin>>pilih;
		  
		  if(pilih==1){
		          list[1]->get_data();
		          list[1]->display_area();
		          getch();
		          }
		  else if (pilih==2){
		          list[2]->get_data();
		          list[2]->display_area();
		          getch();
		          }
		 else{
		     cout <<"maaf pilihan yang anda masukkan salah"<<endl;
		     getch();
			}
		cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    cout << "=============================="<<endl;	
    return 0;
}
