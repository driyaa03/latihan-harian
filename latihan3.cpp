#include <iostream>
using namespace std;

    void penambahanwaktu (int jam, int menit){
        jam = jam + 8;
        menit = menit + 30;
        if (jam == 24){
            jam = 0;
        } 
        else if (jam > 24){
            jam -= 24;
        }

        if (menit == 60){
            menit = 0;
        }
        else if (menit > 60){
            menit -= 60;
        }
        cout << jam << " " << menit;

    }
int main(){
    int h, m;
    cin >> h >> m;
    penambahanwaktu(h,m);
}
