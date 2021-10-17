#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int a[t];

    for (int i = 0; i < t; i++)
        cin >> a[i];

    int n, m;
    cin >> n >> m;
    int s[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> s[i][j];

    for (int elem = 0; elem < t; elem++)
    {
        bool found = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[elem] == s[i][j])
                {
                    found = true;
                    cout << i << ' ' << j << '\n';
                    break;
                }

        if (!found)
            cout << -1 << '\n';

        return 0;
    }