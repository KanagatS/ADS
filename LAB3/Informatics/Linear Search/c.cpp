#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n, mx = -1000, mx_ind = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > mx){
            mx = a[i];
            mx_ind = i;
        }
    }
    
    cout << mx_ind + 1;
      
    return 0;
}