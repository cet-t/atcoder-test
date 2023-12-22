#include <bits/stdc++.h>

using namespace std;

void arare()
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
    string dst = isIncY ? "Four" : "Three";
    cout << dst << endl;
}

void theater()
{
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        int l, r;
        cin >> l >> r;
        count += 1 + r - l;
    }
    cout << count << endl;
}

void sep9()
{
    string N;
    cin >> N;
    bool flag = false;
    for (int i = 0; i < N.length(); ++i)
    {
        if (N[i] == '9')
        {
            flag = true;
            break;
        }
    }
    string dst = flag ? "Yes" : "No";
    cout << dst << endl;
}

int main()
{
    // arare();
    // theater();
    sep9();
}