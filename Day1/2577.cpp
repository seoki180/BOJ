// 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
// 예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.a

#include <iostream>
#include <string>
using namespace std;

int cnt[10] ={};
void printarr(int cnt[]){
    for(int i =0; i<10; i++){
        cout << cnt[i] << "\n";
    }
}

void func(string S){
    for(int i = 0; i<S.length(); i++){
        int temp = S[i] - 48;
        cnt[temp]++;
    }
    printarr(cnt);
}


int main(){
    int A,B,C;
    cin >> A >> B >> C;
    string S = to_string(A*B*C);
    func(S);
}