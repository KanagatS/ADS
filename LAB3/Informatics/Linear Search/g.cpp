#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

bool found(vector<int> v, int x){
    // BINARY SEARCH
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v1, v2;

    while (n--)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    
    while (k--)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for (auto &i : v2){
        if (found(v1, i)) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}