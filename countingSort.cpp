#include <iostream>
using namespace std;

void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void countingsort(int arr[], int n){
    int maxVal = arr[0]; // Mencari nilai maksimum
    for(int i = 1; i < n; i++){
        if(arr[i] > maxVal)
           maxVal = arr[i];
    }

    int counting[maxVal + 1] = {0}; // Membuat array count (frekuensi), posisi untuk angka 0 (counting = [0, 0, 0, 0, 0])
    for(int i = 0; i < n; i++){ // Menghitung jumlah kemunculan setiap elemen
            counting[arr[i]]++;
        }

        int index = 0; // Menyusun ulang elemen ke array utama (hasil terurut)
        for(int i = 0; i <= maxVal; i--){ //KALO UDAH KE DESCENDING
            while (counting[i] > 0){
            arr[index] = i;
            index++;
            counting[i]--;
        }
    }
}

void output(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);

    countingsort(arr, n);

    output(arr, n);
}