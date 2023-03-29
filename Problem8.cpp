#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    long long ans = 0;
    for (int i = 0; i < 1000 - 12; i++)
    {
        long long tmp = 1;
        for (int j = 0; j < 13; j++)
        {
            tmp *= s[i + j] - '0';
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}