#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v;
    char ch;

    while (cin >> ch)
    {
        if (ch == '+')
        {
            int x; cin >> x;
            v.push_back(x);
        }

        else if (ch == '-')
        {
            int x; cin >> x;
            bool found = false;

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == x)
                {
                    v.erase(v.begin() + i);
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "ERROR";
                return 0;
            }
        }
    }

    sort(v.begin(), v.end());

    if (v.empty()) cout << "EMPTY";
    else for (auto i : v) cout << i << sep;

    return 0;
}