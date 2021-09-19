#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n, mx = -1000, mn = 1000;
    cin >> n; 
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx) a[i] = mn;
        cout << a[i] << sep;
    }
    
      
    return 0;
}