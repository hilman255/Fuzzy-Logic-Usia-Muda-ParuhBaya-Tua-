// Nama     : M Hilman Ramadhan
// Kelas    : 3B - D4 TE
// No       : 16
// POLITEKNIK NEGERI MALANG

#include <iostream>
#include <algorithm> // Untuk fungsi std::max

// Fungsi keanggotaan untuk usia muda
double membershipYouth(double age) {
    if (age < 25) {
        return 1.0;
    } else if (age >= 25 && age < 40) {
        return ((40 - age) / (40-25));
    } else {
        return 0.0;
    }
}

// Fungsi keanggotaan untuk usia sedang
double membershipMiddleAged(double age) {
    if (age > 25 && age <= 40) {
        return ((age - 25) / (40-25));
    } else if (age > 40 && age < 55) {
        return ((55 - age) / (40-25));
    } else {
        return 0.0;
    }
}

// Fungsi keanggotaan untuk usia tua
double membershipOld(double age) {
    if (age > 40 && age <= 55) {
        return ((age - 40) / (55-40));
    } else if (age > 55) {
        return 1.0;
    } else {
        return 0.0;
    }
}

int main() {
    double age;

    // Input usia dari pengguna
    std::cout << "Masukkan usia: ";
    std::cin >> age;

    // Menghitung derajat keanggotaan
    double youthDegree = membershipYouth(age);
    double middleAgedDegree = membershipMiddleAged(age);
    double oldDegree = membershipOld(age);

    // Menentukan kategori usia dengan derajat keanggotaan tertinggi
    double maxDegree = std::max({youthDegree, middleAgedDegree, oldDegree});
    std::string category;

    if (maxDegree == youthDegree) {
        category = "Usia Muda";
    } else if (maxDegree == middleAgedDegree) {
        category = "Usia Sedang";
    } else {
        category = "Usia Tua";
    }

    // Menampilkan hasil
    std::cout << "Kategori usia: " << category << std::endl;

    return 0;
}