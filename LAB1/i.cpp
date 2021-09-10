#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int N; cin >> N;
    stack<int> s[N+1];
    stack<int> s2[5];

    for (int i = 1; i <= N; i++){
        int k; cin >> k;
        while(k--){
            int x; cin >> x;
            s[i].push(x);
            if (N == 2) s2[i].push(x);
        }
    }
    
    if (N == 1) return 0;

    
    // NOT SOLVED YET D:


    return 0;
}