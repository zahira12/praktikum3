#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukan Jumlah Nilai :";
    cin >> a;

    for (i;i<a;i++){
        cout<< "Masukan Nilai Ke-" << i+1 << ":";
        cin>> x;

        if (x > max)
            max = x;
    }
    cout << "Nilai Terbesar Adalah :"<< max <<endl;
    return 0;
}
