// Nama     : M Hilman Ramadhan
// Kelas    : 3B - D4 TE
// No       : 16
// POLITEKNIK NEGERI MALANG

#include <iostream>
#include <algorithm> 

using namespace std;

// keanggotaan usia Muda
double UsiaMuda(double usia) {
    if (usia < 25) {
        return 1.0;
    } else if (usia >= 25 && usia < 40) {
        return ((40 - usia) / (40-25));
    } else {
        return 0.0;
    }
}

// keanggotaan untuk usia Paruhbaya
double UsiaParuhbaya(double usia) {
    if (usia > 25 && usia <= 40) {
        return ((usia - 25) / (40-25));
    } else if (usia > 40 && usia < 55) {
        return ((55 - usia) / (40-25));
    } else {
        return 0.0;
    }
}

// keanggotaan untuk usia Tua
double UsiaTua(double usia) {
    if (usia > 40 && usia <= 55) {
        return ((usia - 40) / (55-40));
    } else if (usia > 55) {
        return 1.0;
    } else {
        return 0.0;
    }
}

int main() {
    double usia;

    // Input usia
    cout << "Masukkan usia: ";
    cin >> usia;

    // Menghitung derajat keanggotaan
    double Muda = UsiaMuda(usia);
    double Paruhbaya = UsiaParuhbaya(usia);
    double Tua = UsiaTua(usia);

    // Menentukan kategori usia dengan keanggotaan tertinggi
    double keanggotaan = std::max({Muda, Paruhbaya, Tua});
    string kategori;

    if (keanggotaan == Muda) {
        kategori = "Muda";
    } else if (keanggotaan == Paruhbaya) {
        kategori = "Paruhbaya";
    } else {
        kategori = "Tua";
    }

    // Menampilkan hasil
    cout << "Kategori usia: " << kategori << std::endl;

    return 0;
}