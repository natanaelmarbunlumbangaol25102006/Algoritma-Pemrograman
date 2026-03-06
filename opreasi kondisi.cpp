#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk menghitung dan menampilkan gaji
void hitungGaji(int gol, int anak) {
    long gajiPokok, pajak, tunjangan, total;

    // Logika Golongan
    if (gol == 1) gajiPokok = 5000000;
    else if (gol == 2) gajiPokok = 3000000;
    else if (gol == 3) gajiPokok = 2500000;
    else gajiPokok = 0;

    // Hitung Pajak
    pajak = 0.05 * gajiPokok;

    // Logika Tunjangan Anak
    if (anak >= 1 && anak <= 2) tunjangan = anak * 500000;
    else if (anak > 2) tunjangan = 750000;
    else tunjangan = 0;

    total = (gajiPokok - pajak) + tunjangan;

    cout << "Gaji total : Rp. " << total << ",-" << endl;
}

int main() {
    string nama;
    int gol, anak;

    cout << "Masukkan nama anda : ";
    getline(cin, nama);
    cout << "Masukan golongan (1,2,3) : ";
    cin >> gol;
    cout << "Jumlah anak : ";
    cin >> anak;

    // Memanggil prosedur
    hitungGaji(gol, anak);

    return 0;
}
