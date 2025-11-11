#include <iostream>
using namespace std;

void input(int arr[], int n) {
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int n, int i){
    int largest = i; //paling depan dianggap paling besar
    int left = 2*i + 1; // mendapat index child kiri
    int right = 2*i + 2; // mendapatkan index child kanan

    if(left < n && arr[left] > arr[largest]){ // nilai child kiri apakah lebih besar daripada nilai tertinggi (KALO UDAH KE DESCENDING)
        largest = left; // index tertinggi menjadi index child kiri
    }

    if(right < n && arr[right] > arr[largest]){ // nilai child kanan apakah lebih besar daripada nilai tertinggi (KALO UDAH KE DESCENDING)
        largest = right; // index tertinggi menjadi index child kanan
    }

    if(largest != i){ // Mengecek apakah ada nilai yang lebih tinggi daripada root
        tukar(arr[i], arr[largest]); // menukar root dengan nilai dari index tertinggi
        heapify(arr, n, largest); // mengulang untuk membuat root menjadi nilai paling tinggi
    }
}

void heapsort(int arr[], int n){
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i); // menbuat root menjadi nilai paling tinggi, nilai parent selalu lebih besar daripada childnya
    }

    for(int i = n - 1; i > 0; i--){
        tukar(arr[0], arr[i]); // menukar yaang paling belakang dengan root
        heapify(arr, i, 0); // mengubah root menjadi nilai tertinggi
    }
}


void output(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    input(arr,n); //input data

    heapsort(arr, n); 

    output(arr, n); //output data
} 