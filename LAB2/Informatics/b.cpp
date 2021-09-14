#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

struct comp
{
    template <typename T>

    bool operator()(const T &l, const T &r)
    {
        if (l.second != r.second) return l.second > r.second;
        else return l.first < r.first;
    }
};

void map_sort(map<string, int> &M)
{
    set<pair<string, int>, comp> S(M.begin(), M.end());

    for (auto &i : S) cout << i.first << sep << i.second << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    map<string, int> m;

    while (cin >> s) m[s]++;

    map_sort(m);

    return 0;
}