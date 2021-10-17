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

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int x = 1; x <= n; x++)
        for (int k = 2; k <= n; k++)
        {
            int sum1 = 0, sum2 = 0;

            for (int i = 1; i <= m; i++)
            {
                sum1 += a[k - 1][i];
                sum2 += a[k][i];
            }

            if (sum1 < sum2)
                for (int i = 1; i <= m; i++)
                    swap(a[k - 1][i], a[k][i]);

            else if (sum1 == sum2)
            {
                bool c = false;
                for (int i = 1; i <= m; i++)
                {
                    if (a[k - 1][i] > a[k][i])
                    {
                        c = true;
                        break;
                    }
                    else if (a[k - 1][i] < a[k][i])
                    {
                        c = false;
                        break;
                    }
                }

                if (c)
                    for (int i = 1; i <= m; i++)
                        swap(a[k - 1][i], a[k][i]);
            }
        }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}