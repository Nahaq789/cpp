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
    int H;
    int W;
    string str;

    int N;
    vector<string> vec;
    cin >> H >> W;

    for(int i = 0; i < H; i++) {
        cin >> str;
        vec.push_back(str);   
    }

    for(int i = 0; i < H + 1; i++) {
        cout << "#";
        for(int j = 0; j < W + 1; j++) {
            if (i == 0) {
                cout << "#";
            } else {
                cout << vec[j];
                cout << "#";
                break;
            }
        }
        cout << endl;
    }
    for(int i = 0; i < W + 2; i++) {
        cout << "#";
    }
    cout << endl;
}
