#include <iostream>

using namespace std;

int main(){
    system("cls");
    string kalimat;
    char ch;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    for(int i = 0; i < kalimat.length(); i++){
        ch = toupper(kalimat[i]);
        cout << ch;
    }

    return 0;
}