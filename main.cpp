#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int N, k; cin >> N;
    // 長さ N の可変長配列を宣言
    vector<int> A(N);
    // 配列の中身を受け取る
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 左から k 番目の要素を出力
    cout << A[0] << endl;
    // 右から k 番目の要素を出力
    cout << A[1] << endl;

	return 0;
}