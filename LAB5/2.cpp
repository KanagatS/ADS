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
    set<int> s;

    while(n--){
        int x; cin >> x;
        s.insert(x);
    }

    cout << s.size();
      
    return 0;
}