#include <iostream>

using namespace std;

int main(){
    system("cls");
    int detik, menit, jam;
    awal:
    cout << "Masukkan jumlah detik: ";
    cin >> detik;
    // cek apakah detik yang dimasukkan sudah valid
    if(detik < 0){
        cout << "Detik yang anda masukkan tidak valid" << endl;
        system("pause");
        goto awal;
    }
    // perhitungan jam, menit, dan detik
    jam = detik / 3600;
    menit = detik % 3600 / 60;
    detik = detik % 3600 % 60;

    if(jam < 10){
        cout << "0" << jam;
    }else{
        cout << jam;
    }

    if(menit < 10){
        cout << ":0" << menit;
    }else{
        cout << ":" << menit;
    }

    if(detik < 10){
        cout << ":0" << detik;
    }else{
        cout << ":" << detik;
    }

    return 0;
}