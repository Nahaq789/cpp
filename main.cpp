
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A;

    int M;
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        A.push_back(M);
    }

    int count = 0;
    bool flg = true;
    while (flg)
    {
        for (int &num : A)
        {
            if (num % 2 != 0)
            {
                flg = false;
                break;
            }
            num /= 2;
        }
        if (!flg)
        {
            break;
        }
        count++;
    }

    cout << count << endl;
}