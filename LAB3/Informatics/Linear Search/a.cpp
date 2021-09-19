#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n, x; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cin >> x;

    for (int i = 0; i < n; i++)
        if (a[i] == x) cout << i + 1 << sep;
    
      
    return 0;
}