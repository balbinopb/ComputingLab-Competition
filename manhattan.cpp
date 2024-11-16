#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung jumlah pasangan dengan Manhattan Distance X
long long countPairs(int N, int M, int X) {
    long long totalPairs = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            // Iterasi untuk mencari pasangan yang valid
            for (int dx = -X; dx <= X; dx++) {
                int dy = X - abs(dx);
                int nx1 = i + dx, ny1 = j + dy;
                int nx2 = i + dx, ny2 = j - dy;

                // Validasi koordinat pasangan
                if (nx1 >= 1 && nx1 <= N && ny1 >= 1 && ny1 <= M) totalPairs++;
                if (dy != 0 && nx2 >= 1 && nx2 <= N && ny2 >= 1 && ny2 <= M) totalPairs++;
            }
        }
    }

    return totalPairs / 2; // Karena setiap pasangan dihitung dua kali
}

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    cout << countPairs(N, M, X) << endl;

    return 0;
}
