#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Fungsi untuk mengecek apakah substring adalah Orteganol
bool isOrteganol(const string& s, int start, int end) {
    unordered_map<char, int> freq;
    for (int i = start; i <= end; i++) {
        freq[s[i]]++;
    }
    int count = freq.begin()->second; // Frekuensi pertama
    for (const auto& pair : freq) {
        if (pair.second != count) {
            return false; // Frekuensi tidak sama
        }
    }
    return true; // Semua karakter memiliki frekuensi sama
}

int countOrteganolSubstrings(const string& s, int n, int a, int b) {
    int count = 0;

    // Iterasi semua panjang substring antara A dan B
    for (int len = a; len <= b; len++) {
        for (int i = 0; i <= n - len; i++) {
            if (isOrteganol(s, i, i + len - 1)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    cout << countOrteganolSubstrings(s, n, a, b) << endl;

    return 0;
}
