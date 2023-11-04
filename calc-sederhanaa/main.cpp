#include <iostream>
using namespace std;

int main(){
    
    int a,b,hasil;
    char aritmatika;
    cout << "selamat datang di calculator \n \n";
    
    cout << "masukkan angka pertama: ";
    cin >> a;
    cout << "\nmasukkan operator perhitungan: +,-,*,/: ";
    cin >> aritmatika;
    cout << "\nmasukkan angka kedua: ";
    cin >> b;

    cout << "\nhasil perhitungan anda:\n";
    
                if(aritmatika == '+'){
                    hasil = a + b;
                }else if(aritmatika == '-'){
                    hasil = a - b;
                }else if(aritmatika == '*'){
                    hasil = a * b;
                }else if(aritmatika == '/'){
                    hasil = a / b;
                }else if(aritmatika == '%'){
                    hasil = a % b;
                }
                    
    cout << a << aritmatika << b << "=" << hasil << endl;
    
    return 0;
}
