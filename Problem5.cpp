#include <bits/stdc++.h>
using namespace std;
// 参考 https://o-treetree.hatenablog.com/entry/2020/05/14/230024

// 最大公約数
long long gcd(long long a, long long b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

// 最小公倍数
long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main(void)
{
    long long ans = 1;
    long long list[19] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < 19; i++)
    {
        ans = lcm(ans, list[i]);
    }
    cout << ans << endl;
}