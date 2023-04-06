#include <bits/stdc++.h>
using namespace std;
map<pair<long long, long long>, long long> memo;

// 組み合わせを計算する(計算量を落とすためにメモ化を採用)
// 漸化式をもとに再帰で求める
long long calculate_combination(long long n, long long r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        if (memo[{n, r}] != 0)
        {
            return memo[{n, r}];
        }
        else
        {
            long long out = calculate_combination(n - 1, r - 1) + calculate_combination(n - 1, r);
            memo[{n, r}] = out;
            return out;
        }
    }
}

int main(void)
{
    cout << calculate_combination(40, 20) << endl;
}