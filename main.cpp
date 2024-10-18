#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int max1 = max(max(A, B), C);
    int min1 = min(min(A, B), C);

    cout << max1 - min1 << endl;
}
