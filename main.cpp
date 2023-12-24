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

void wande()
{
    int N;
    cin >> N;

    set<int> stock;
    for (int i = 0; i < N; ++i)
    {
        int A;
        cin >> A;
        if (i != 0)
        {
            if (stock.count(A))
            {
                stock.erase(A);
                continue;
            }
        }
        stock.insert(A);
    }
    cout << "count: " << stock.size() << endl;
}

void ex17()
{
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P.at(i);
    }

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    // ここにプログラムを追記
    int pattern = 0;
    for (auto a : A)
    {
        for (auto p : P)
        {
            if (a + p == S)
            {
                ++pattern;
            }
        }
    }
    cout << pattern << endl;
}

int main()
{
    // arare();
    // theater();
    // sep9();
    // wande();
    // ex17();

    return 0;
}