#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    char s[N + 1] = {};
    for (int i = 0; i < N; ++i)
    {
        cin >> s[i];
    }
    s[N] = '\0';

    bool isIncY = false;
    for (int i = 0; i < N; ++i)
    {
        if (s[i] == 'Y')
        {
            isIncY = true;
            continue;
        }
    }
    if (isIncY)
        cout << "Four" << endl;
    else
        cout << "Three" << endl;
}