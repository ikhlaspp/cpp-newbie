#include <iostream>
#include <conio.h>
#include <string>
#include <math.io>

using namespace std;

int main(){
	int nilai;
	// A = 90 - 100
	// B = 80 - 89
	// C = 70 - 79
	// D = 60 - 69
	// E = 0 - 60
	
	cout<<"======================================"<<endl;
	cout<<"Nama : Ikhlas Putra Pambagyo"<<endl;
	cout<<"Kelas : X MIPA 1"<<endl;
	cout<<"No Absen : 21"<<endl;
	cout<<"======================================"<<endl;
	
	cout<<"Masukkan Nilai anda = ";
	cin>>nilai;
    if (nilai >= 90){
    	cout<<"Nilai anda A"<<endl;
	}if (nilai >= 80){
		cout<<"Nilai anda B"<<endl;
	}else if (nilai >= 70){
		cout<<"Nilai anda C"<<endl;
	}else if (nilai >= 60){
		cout<<"Nilai anda D"<<endl;
	}else {
		cout<<"Nilai anda E"<<endl;
	}
getch();
}
