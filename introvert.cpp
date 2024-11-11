#include <iostream>
#include <cmath>
using namespace std;

int maxConsecutiveZeros(string s) {
    int n=s.length();
    int maxCount = 0; 
    int currentCount = 0;
    int maxindex=-1;
    int currIndex=-1;

    for (int i=0; i<n; i++) {
        if (s[i] == '0') {
            currentCount++;
            currIndex=i;
             
        } else {
            if (maxCount<currentCount){
                maxCount=currentCount; 
                maxindex=currIndex;
            }
            currentCount = 0;
        }
    }
    if(maxCount<=1){
        return 1;
    }
    int x=((maxindex+1)-(s.length()-(maxindex+1)))/2;

    return x+(s.length()-(maxindex+1))+1;
}

int main() {

    int  n;
    string str;
    cin >> n;
    cin >> str;
    
    cout<<maxConsecutiveZeros(str)<<endl;

    return 0;
}
