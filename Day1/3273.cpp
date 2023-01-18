// n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. ai의 값은 1보다 크거나 같고,
// 1000000보다 작거나 같은 자연수이다. 자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>
using namespace std;

int findNum(int len, int tar, int arr[]);

int main(){
    int len,tar;
    cin >> len;
    int arr[len];
    for(int i= 0; i<len; i++) cin >> arr[i];
    cin >> tar;
    cout << findNum(len,tar,arr);
}

int findNum(int len, int tar, int arr[]){
    int count = 0, start = 0, end = len-1,temp = 0;
    sort(arr,arr+len);
    while(1){
        if(start >= end) break;
        temp = arr[start]+arr[end];
        if(temp == tar){
            start++;
            end--;
            count++;
        }
        else if(temp < tar) start++;
        else if(temp > tar) end--;
    }
    return count;
}
