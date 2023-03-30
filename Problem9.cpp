#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ans = 1000;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = i; j <= ans; j++)
        {
            int k = ans - i - j;
            if (pow(i, 2) + pow(j, 2) == pow(k, 2) && i + j + k == ans)
            {
                cout << i * j * k << endl;
                return 0;
            }
        }
    }
}