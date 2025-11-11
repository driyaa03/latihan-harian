/*
Nama Program :
Nama         :
NPM          :
Tanggal Buat :
Deskripsi    :
*/

#include <iostream>
using namespace std;

struct suratFisik {
    string penerimaSurat, pengirimSurat;
    string noPenerima, noPengirim;
    string alamatTujuan;
    string isiSurat;
    string tempatPenulisan;
    string tanggalPenulisan;
};

int main(){
    suratFisik Surat;
    cin >> Surat.penerimaSurat;
    cin >> Surat.pengirimSurat;
    cin >> Surat.noPenerima;
    cin >> Surat.noPengirim;

    cin.ignore();
    getline(cin, Surat.alamatTujuan);
    getline(cin, Surat.isiSurat);
    getline(cin, Surat.tempatPenulisan);
    getline(cin, Surat.tanggalPenulisan);
    
    cout << "Nama Penerima Surat : " << Surat.penerimaSurat << endl;
    cout << "Nama Pengirim Surat : " << Surat.pengirimSurat << endl;
    cout << "Nomor Telepeon Penerima Surat : " << Surat.noPenerima << endl;
    cout << "Nomor Telepeon Pengirim Surat : " << Surat.noPengirim << endl;
    cout << "Alamat Tujuan Surat : " << Surat.alamatTujuan << endl;
    cout << "Surat" << endl;
    cout << " Isi : " << Surat.isiSurat << endl;
    cout << " Tempat Penulisan :" << Surat.tempatPenulisan << endl;
    cout << " Tanggal Penulisan :" << Surat.tanggalPenulisan << endl;
}