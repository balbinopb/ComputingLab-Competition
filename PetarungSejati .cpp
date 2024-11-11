#include <bits/stdc++.h>
#include <numeric>//__gcd
using namespace std;

/*
#include <vector>
#include <algorithm>

bool customCompare(int a, int b) {
    return (a % 10) < (b % 10); // Sort based on the last digit
}

int main() {
    vector<int> vec = {15, 22, 9, 31, 5, 16};

    sort(vec.begin(), vec.end(), customCompare);

    for (int i : vec) {
        std::cout << i << " ";
    }

    return 0;
}
/*

/*

int abs(int n){

    return n>=0?  n : -n;
}

int gcd(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}


int lcm(int n, int m) {
    return abs(n * m) / gcd(n, m);
}

*/

int main()
{
    int n, m;
    vector<int> arr;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> m;
        arr.push_back(m);
    }
    int temp1 = (arr[0] + arr[1])/__gcd(arr[0], arr[1]);
    for (int i = 2; i < n; i++){
        int temp2 = (temp1 + arr[i])/__gcd(temp1, arr[i]);
        temp1 = temp2;
    }
    cout << temp1 << endl;

    return 0;
}


