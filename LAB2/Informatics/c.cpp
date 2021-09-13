#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second > b.second;
}

void do_sort(map<string, int> m)
{
    vector<pair<string, int>> v;

    for (auto &i : m)
        v.push_back(i);

    sort(v.begin(), v.end(), cmp);

    for (auto &i : v)
        cout << i.first << sep << i.second << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<string> v;
    string s;
    map<string, int> m;

    while (cin >> s)
        m[s] += 1;

    do_sort(m);

    return 0;
}