// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

#include <iostream>
#include <string>

using namespace std;

void printarr(int arr[]){
    for(int i =0 ;i<25; i++){
        cout << arr[i] << " ";
    }
}

void check(int arr[],string S){
    for(int i = 0; i<S.length(); i++){
        arr[int(S[i])-97]++;
    }
}

int main(){
    string S;
    int arr[26];
    for(int i =0; i<26; i++){
        arr[i] = 0;
    }
    cin >> S;
    check(arr,S);
    printarr(arr);
}
