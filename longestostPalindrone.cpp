#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string longestPalindrome(string S) {
    unordered_map<char, int> freq;
    string half = "", middle = "";

    // Hitung frekuensi setiap karakter
    for (char c : S) {
        freq[c]++;
    }

    // Bangun setengah bagian palindrome dan karakter tengah (jika ada)
    for (auto& pair : freq) {
        char c = pair.first;
        int count = pair.second;

        // Tambahkan setengah karakter yang dapat digunakan
        half += string(count / 2, c);

        // Simpan karakter tengah jika jumlahnya ganjil
        if (count % 2 == 1 && middle.empty()) {
            middle = c;
        }
    }

    // Bentuk palindrome terpanjang
    string palindrome = half + middle + string(half.rbegin(), half.rend());
    return palindrome;
}

int main() {
    string S;
    cin >> S;

    cout << longestPalindrome(S) << endl;
    return 0;
}
