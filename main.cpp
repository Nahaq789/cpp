#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    vector<string> opvec;
    vector<int> numvec;
    string op;
    int num;

    int result = A;

    for (int i = 0; i < N; i++) {
        cin >> op >> num;;
        opvec.push_back(op);
        numvec.push_back(num);
        // cout << opvec[i] << numvec[i];
        // cout << endl;
    }

    for (int i = 0; i < N; i++) {
        if (opvec[i] == "+") {
            result += numvec[i];
            cout << i + 1 << ":" << result << endl;
        }
        else if (opvec[i] == "-") {
            result -= numvec[i];
            cout << i + 1 << ":" << result << endl;
        }
        else if (opvec[i] == "*") {
            result *= numvec[i];
            cout << i + 1 << ":" << result << endl;
        }
        else if (opvec[i] == "/" && numvec[i] != 0) {
            result /= numvec[i];
            cout << i + 1 << ":" << result << endl;
        }
        else {
            cout << "error" << endl;
            break;
        }
    }
}
