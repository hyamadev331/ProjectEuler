#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int count = 2;
    int n = 4;
    while (1)
    {
        if (!isPrime(n))
        {
            count++;
            if (count == 10001)
            {
                cout << n << endl;
                return 0;
            }
        }
        n++;
    }
}