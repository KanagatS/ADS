#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

struct heap
{
    ll val[200100];
    int hs;

    heap()
    {
        hs = 0;
    }

    ll get_min()
    {
        ll ans = val[0];
        del();
        return ans;
    }

    void add(ll x)
    {
        ll i = hs++;
        val[i] = x;
        ll p = (i - 1) / 2;
        while (i && val[i] < val[p])
        {
            swap(val[i], val[p]);
            i = p;
            p = (i - 1) / 2;
        }
    }

    void del()
    {
        val[0] = val[--hs];
        ll i = 0;
        while (2 * i + 1 < hs)
        {
            ll c1 = 2 * i + 1;
            ll c2 = 2 * i + 2;
            ll mp = c1;
            if (c2 < hs)
                if (val[c2] < val[c1])
                    mp = c2;

            if (val[i] > val[mp])
            {
                swap(val[i], val[mp]);
                i = mp;
            }

            else break;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    heap h;

    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        h.add(x);
    }
    

    for (int i = 0; i < n - 1; i++)
    {
        int sm = h.get_min() + h.get_min();
        h.add(sm);
        ans += sm;
    }

    cout << ans;

    return 0;
}