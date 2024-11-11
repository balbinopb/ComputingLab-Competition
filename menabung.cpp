#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int N;//panjang
    ll X;
    cin >> N >> X;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    ll jumlah = 0;
    int day = 0;
    
    while (jumlah < X) {
        jumlah += A[day % N];
        day++;
    }
    
    cout << day << endl;
    return 0;
}
