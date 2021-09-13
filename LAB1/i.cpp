#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st[500];
    vector<pair<int, int>> v;

    int n; cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        int m; cin >> m;
        
        while (m--)
        {
            int x; cin >> x;
            st[i].push(x);
        }

        if (i != 1)
            while (!st[i].empty())
            {
                st[1].push(st[i].top());
                st[i].pop();
                v.push_back(make_pair(i, 1));
            }
    }

    if (n == 1) return 0;

    if (n == 2)
    {
        while (!st[1].empty() && st[1].top() == 2)
        {
            st[2].push(st[1].top());
            st[1].pop();
            cnt++;
        }

        while (!st[1].empty())
        {
            if (st[1].top() == 2)
            {
                cout << "0\n";
                return 0;
            }
            st[1].pop();
        }

        for (int i = 0; i < cnt; i++)
            v.push_back(make_pair(1, 2));
    }
    else
    {
        while (!st[1].empty())
        {
            if (st[1].top() == 1 or st[1].top() == 2)
            {
                st[2].push(st[1].top());
                v.push_back(make_pair(1, 2));
            }
            else
            {
                st[st[1].top()].push(st[1].top());
                v.push_back(make_pair(1, st[1].top()));
            }
            st[1].pop();
        }

        while (!st[2].empty())
        {
            if (st[2].top() == 1)
            {
                st[1].push(st[2].top());
                v.push_back(make_pair(2, 1));
            }
            else
            {
                v.push_back(make_pair(2, 3));
                st[3].push(st[2].top());
            }
            st[2].pop();
        }
        
        while (!st[3].empty() && st[3].top() == 2)
        {
            st[2].push(st[3].top());
            v.push_back(make_pair(3, 2));
            st[3].pop();
        }
    }

    for (auto i : v)
        cout << i.first << sep << i.second << '\n';

    return 0;
}