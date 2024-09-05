#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int N;
//     int Ai;
//     cin >> N;
//     vector<int> vec;

//     for (int i = 0; i < N; i++) {
//         cin >> Ai;
//         vec.push_back(Ai);
//     }
// }


int main() {
    int N;
    int Ai;
    cin >> N;
    vector<int> vec;

    int avg = 0;

    // 入力を格納
    for (int i = 0; i < N; i++) {
        cin >> Ai;
        vec.push_back(Ai);
    }
    //入力された内容をすべて足す
    for(int i = 0; i < N; i++) {
        avg += vec[i];
    }
    //平均点
    avg /= N;
    //平均点からどれくらいさが離れているか
    for(int i = 0; i < N; i++) {
        cout << abs(avg - vec[i]) << endl;
    }
    
    cout << endl;
}
