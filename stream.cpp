#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string teks;
    int n;
    string namaFile;

    cout << "Masukkan teks: ";
    getline(cin, teks);
    cout << "Masukkan jumlah pergeseran: ";
    cin >> n;
    cin.ignore(); // membersihkan newline
    cout << "Masukkan nama file output: ";
    getline(cin, namaFile);

    n %= 26; // batas pergeseran alfabet

    // Proses enkripsi Caesar Cipher
    for (int i = 0; i < teks.length(); i++) {
        char c = teks[i];
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + n) % 26 + base;
        }
        teks[i] = c;
    }

    // Tulis hasil ke file
    ofstream outFile(namaFile);
    if (!outFile) {
        cout << "Gagal membuka file untuk ditulis!" << endl;
        return 1;
    }
    outFile << teks;
    outFile.close();

    cout << "Hasil enkripsi: " << teks << endl;
    cout << "Tersimpan di file: " << namaFile << endl;
    return 0;
}