#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long num = 600851475143;
    long long num2 = num;
    long long ans = 0;
    // 素因数分解を行う
    for (long long i = 2; i * i <= num; i++)
    {
        if (num2 % i == 0)
        {
            ans = max(ans, i); // 素因数の最大値を更新
            while (num2 % i == 0)
            {
                num2 /= i;
            }
        }
    }
    cout << ans << endl;
}