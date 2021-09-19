#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n][m];

    int temp, ans = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int mn[n], mx[m];

    // Finding minimum in each row
    for (int i = 0; i < n; i++)
    {
        int temp = a[i][0];

        for (int j = 0; j < m; j++)
            if (a[i][j] < temp)
                temp = a[i][j];

        mn[i] = temp;
    }

    // Finding maximum in each column
    for (int i = 0; i < m; i++)
    {
        temp = a[0][i];

        for (int j = 0; j < n; j++)
            if (a[j][i] > temp)
                temp = a[j][i];

        mx[i] = temp;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mn[i] == mx[j])
                ans++;

    cout << ans;

    return 0;
}