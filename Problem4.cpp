#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ans = 0;
    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            // order
            string orderNum = to_string(i * j);
            // reverse order
            string reverseNum = orderNum;
            reverse(orderNum.begin(), orderNum.end());
            if (orderNum == reverseNum)
            {
                ans = max(ans, i * j);
            }
        }
    }
    cout << ans << endl;
}