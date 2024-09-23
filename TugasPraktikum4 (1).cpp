#include <iostream>
#include <vector>
using namespace std;
// Fungsi untuk mengecek bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk mendapatkan faktor dari bilangan
vector<int> getFactors(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) factors.push_back(i);
    }
    return factors;
}

int main() {
    int limit;
    cout << "Masukkan batas bilangan: ";
    cin >> limit;

    int sumOdd = 0, sumEven = 0, sumPrime = 0;
    cout << "Bilangan Ganjil: \n";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
        sumOdd += i;

        // Menampilkan faktor dari bilangan ganjil
        cout << "(Faktor: ";
        vector<int> factors = getFactors(i);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << ")\n";
    }

    cout << "\nBilangan Genap: \n";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
        sumEven += i;

        // Menampilkan faktor dari bilangan genap
        cout << "(Faktor: ";
        vector<int> factors = getFactors(i);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << ")\n";
    }

    cout << "\nBilangan Prima: \n";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sumPrime += i;

            // Menampilkan faktor dari bilangan prima (selalu 1 dan bilangan itu sendiri)
            cout << "(Faktor: ";
            vector<int> factors = getFactors(i);
            for (int factor : factors) {
                cout << factor << " ";
            }
            cout << ")\n";
        }
    }

    // Menampilkan jumlah bilangan ganjil, genap, dan prima
    cout << "\nJumlah Bilangan Ganjil: " << sumOdd << endl;
    cout << "Jumlah Bilangan Genap: " << sumEven << endl;
    cout << "Jumlah Bilangan Prima: " << sumPrime << endl;

return 0;
}
