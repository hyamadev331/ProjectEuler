#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s[20][20];
    int ans = 0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cin >> s[i][j];
        }
    }

    // 上方向の計算
    for (int i = 3; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << s[i][j] << endl;
        }
    }
}