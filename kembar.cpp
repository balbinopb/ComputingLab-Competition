#include <iostream>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    int count = 0;
   
    for (int i = 1; i <= x; i++) {
        if (__builtin_popcount(i) == __builtin_popcount(y)) {  //__builtin_popcount untuk jumlah bit
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
