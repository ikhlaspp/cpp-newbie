#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	int nilai;
	cout<<"======================================"<<endl;
	cout<<"Nama : Ikhlas Putra Pambagyo"<<endl;
	cout<<"Kelas : X MIPA 1"<<endl;
	cout<<"No Absen : 21"<<endl;
	cout<<"======================================"<<endl;
	
	cout<<"Masukkan Nilai anda = ";
	cin>>nilai;
	if (nilai>75)
	    {cout<<"Anda dinyatakan LULUS"<<endl;}
	else if(nilai==75)
	    {cout<<"Nilai anda KKM"<<endl;}
	else 
	    {cout<<"Anda wajib mengulang"<<endl;}
getch();
return 0;   	    
}

