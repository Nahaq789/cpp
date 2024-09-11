#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string A;
    vector<string> vec;
    vector<string> chars;

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A;
        vec.push_back(A);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++)
    {
        if (vec[i] == "G" && vec[i + 1] != "G")
        {

            count++;
            continue;
        }
        if (vec[i] == "W" && vec[i + 1] != "W")
        {

            count++;
            continue;
        }
        if (vec[i] == "P" && vec[i + 1] != "P")
        {

            count++;
            continue;
        }
        if (vec[i] == "Y" && vec[i + 1] != "Y")
        {

            count++;
            continue;
        }
    }

    if (count == 3)
        cout << "Three";
    if (count == 4)
        cout << "Four";
}
