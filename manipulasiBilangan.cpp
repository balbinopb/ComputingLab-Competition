#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CheckhasEvenDigit(vector<int>& arr) {
    for (int dgt : arr) {
        if (dgt % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    vector<int> arr;
    cin >> n;

    while (n > 0) {
        arr.push_back(n % 10);
        n /= 10;
    }

    if (!CheckhasEvenDigit(arr)) {
        cout << "Mustahil! O_o" << endl;
        return 0;
    }

    sort(arr.begin(), arr.end(), greater<int>());

    if (arr.back() % 2 != 0) {
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] % 2 == 0) {
                swap(arr[i], arr.back());
                break;
            }
        }
    }

    for (int digit : arr) {
        cout << digit;
    }

    return 0;
}
