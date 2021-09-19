#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int mx = -1000, mx2 = -1000;

    while (n--)
    {
        int x; cin >> x;
        if (x > mx){
            mx2 = mx;
            mx = x;
        } else if (x > mx2 && x != mx){
            mx2 = x;
        }
    }

    cout << (mx2 != -1000 ? mx2 : 0);

    return 0;
}