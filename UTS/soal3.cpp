#include <iostream>

using namespace std;

int main(){
    system("cls");
    string angka;
    int hasil = 0;
    cout << "Masukkan angka: ";
    cin >> angka;
    
    for(int i = 0; i < angka.length(); i++){
        if(angka[i] == '2'){
            hasil += 2;
        }else if(angka[i] == '3'){
            hasil += 3;
        }else if(angka[i] == '5'){
            hasil += 5;
        }else if(angka[i] == '7'){
            hasil += 7;
        }
    }

    cout << hasil;

    return 0;
}