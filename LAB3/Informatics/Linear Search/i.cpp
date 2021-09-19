#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int first_and_last(vector<int> v, int x){
    // FIRST AND LAST X IN ARRAY
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

    for (auto &i : v2)
        cout << first_and_last(v1, i);
    

    return 0;
}