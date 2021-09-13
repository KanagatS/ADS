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

    string s;
    map<string, int> m;

    while (cin >> s) m[s] += 1;

    for (auto i : m) cout << i.first << sep << i.second << endl;

    return 0;
}