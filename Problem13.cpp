#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string nums[100];
    int digit = 0;
    string ans = "";

    for (int i = 0; i < 100; i++)
    {
        string s;
        cin >> s;
        nums[i] = s;
    }

    for (int i = 50 - 1; i >= 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < 100; j++)
        {
            sum += nums[j][i] - '0';
        }
        sum += digit;
        digit = sum / 10;
        ans += to_string(sum % 10);
    }
    if (digit != 0)
    {
        ans += to_string(digit);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < 10; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}