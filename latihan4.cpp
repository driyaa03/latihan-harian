#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ketebalan inisial F: ";
    cin >> n;

    int panjang = 5 * n; // panjang baris horizontal F

    // Bagian atas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < panjang; j++) {
            cout << "F";
        }
        cout << endl;
    }

    // Bagian vertikal sebelum garis tengah
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "F";
        }
        cout << endl;
    }

    // Bagian tengah
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < panjang; j++) {
            cout << "F";
        }
        cout << endl;
    }

    // Sisa vertikal bawah
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "F";
        }
        cout << endl;
    }

    return 0;
}