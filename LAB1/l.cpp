#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    cout << (n / gcd(n, k)) * k;

    return 0;
}