#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fungsi untuk mencari minimum operasi
int findMinOperations(int N, long long X, vector<long long>& a) {
    vector<long long> factors;

    // Faktorisasi bilangan X
    for (long long i = 2; i * i <= X; i++) {
        while (X % i == 0) {
            factors.push_back(i);
            X /= i;
        }
    }
    if (X > 1) factors.push_back(X); // Jika X masih memiliki faktor yang lebih besar dari sqrt(X)

    // Hitung frekuensi setiap faktor di X
    sort(factors.begin(), factors.end());

    // Validasi apakah setiap faktor dari X ada di array a
    for (auto factor : factors) {
        if (find(a.begin(), a.end(), factor) == a.end()) {
            return -1; // Tidak mungkin
        }
    }

    // Return jumlah operasi yang diperlukan (jumlah faktor)
    return factors.size();
}

int main() {
    int N;
    long long X;
    cin >> N >> X;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int result = findMinOperations(N, X, a);
    if (result == -1) {
        cout << "Mustahil! o_o" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
