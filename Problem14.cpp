#include <bits/stdc++.h>
using namespace std;

int coluts(long long n)
{
    int ans = 1;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        ans++;
    }
    return ans;
}

int main(void)
{
    long long ans = 0, mx = 0;
    for (int i = 999999; i >= 1; i--)
    {
        int current_coluts = coluts((long long)i);
        if (current_coluts > mx)
        {
            mx = current_coluts;
            ans = i;
        }
    }
    cout << ans << endl;
}