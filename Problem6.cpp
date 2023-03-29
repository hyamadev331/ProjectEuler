#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long pow_sum = 0;
    long long sum = 0;
    for (long long i = 1; i <= 100; i++)
    {
        pow_sum += pow(i, 2);
        sum += i;
    }
    cout << abs((long long)pow(sum, 2) - pow_sum) << endl;
}