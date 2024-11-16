#include <iostream>
#include <vector>
using namespace std;

vector<int> maximizeScore(int N) {
    vector<int> result;

    // Buat bilangan unik di sekitar nol
    for (int i = 1; i <= N / 2; i++) {
        result.push_back(i);
        result.push_back(-i);
    }

    // Jika N ganjil, tambahkan nol
    if (N % 2 == 1) {
        result.push_back(0);
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    vector<int> result = maximizeScore(N);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
