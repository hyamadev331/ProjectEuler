#include <bits/stdc++.h>
#define MAX_NUM 2000000
using namespace std;

int main(void)
{
    long long ans = 2;
    for (int i = 3; i <= MAX_NUM; i++)
    {
        bool flg = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flg = false;
            }
        }
        if (flg)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}
