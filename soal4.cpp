#include <iostream>
#include "math.h"

using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Insert a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << n << " bukanlah bilangan prima.";
                goto akhir;
            }
        }

        cout << n << " merupakan bilangan prima.";
    }

    akhir:
    return 0;
}
