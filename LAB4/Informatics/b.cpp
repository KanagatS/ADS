#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, cnt = 0;

    while (cin >> x)
    {
        if (x == 0)
        {
            cout << cnt;
            return 0;
        }
        cnt++;
    }

    return 0;
}