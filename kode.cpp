#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countGibberishCodes(int N) {
    vector<long long> dp(N + 1, 0);

    // Base cases
    dp[0] = 1; // String kosong
    if (N >= 1) dp[1] = 1; // Satu karakter "0"
    if (N >= 2) dp[2] = 1; // Dua karakter "00"
    if (N >= 3) dp[3] = 2; // "000" atau "111"

    // DP Iterasi untuk panjang lebih besar
    for (int i = 4; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
    }

    // Hasil akhir
    return dp[N];
}

int main() {
    int N;
    cin >> N;

    cout << countGibberishCodes(N) << endl;

    return 0;
}
