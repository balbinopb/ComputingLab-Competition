#include <bits/stdc++.h>
//#include <numeric>
using namespace std;

string addStep(int A,int B,int K){
    if (A > B){
        int i = 0;
        while (i < K){
            A--;
            if (A==B){
                return "Ya";
                break;
            }
            i++;
        }
        return "Tidak :(";
    }else if(A < B){
        int i = 0;
        while (i < K){
            A++;
            if (A==B){
                return "Ya";
            }
            i++;
        }
        return "Tidak :(";
    }
    return "Ya";
}

int main()
{

    int A, B, X, K; //1 10 5 1
    cin >> A >> B >> X >> K;
    int closeBfromBottom = ((B / X) * X);
    int closeBfromUp = ((B / X) + 1) * X;
    if (B-closeBfromBottom > closeBfromUp-B){
        A += closeBfromUp;
    }else{
        A += closeBfromBottom;
    }
    cout<<addStep(A,B,K)<<endl;
    
    return 0;
}
