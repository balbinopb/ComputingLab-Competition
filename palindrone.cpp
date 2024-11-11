#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrone(string s){
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

string finalResult(string str){
    sort(str.begin() , str.end() );
    string result;
    do {
        if (isPalindrone(str)){
        result=str;
        }
    }while(next_permutation(str.begin(),str.end()));
    return result;
}

int main(){

    string str;
    cin>>str;

    string result =finalResult(str);

    if (result==""){
        cout<<str[0]<<endl;
    }else{
        cout<<result<<endl;
    }
    


}