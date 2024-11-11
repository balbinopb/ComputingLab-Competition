#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    cin >> str;

    int max_length = 1;
    int current_length = 1;

    for (int i = 1; i < n; i++) {
        if (str[i] != str[i - 1]) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 1;
        }
    }

    cout << max_length << endl;

    return 0;
}
