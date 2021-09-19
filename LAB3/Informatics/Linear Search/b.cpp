#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n, mx = -1000;
    cin >> n;

    while(n--){
        int x; cin >> x;
        if (x > mx) mx = x;
    }

    cout << mx;
      
    return 0;
}