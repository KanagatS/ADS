#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; string s;
    queue<pair<int,string>> nine, ten, eleven;

    while (cin >> n >> s){
        if (n == 9)  nine.push(make_pair(n,s));
        if (n == 10) ten.push(make_pair(n,s));
        if (n == 11) eleven.push(make_pair(n,s));
    }

    while (!nine.empty()){
        cout << nine.front().first << sep << nine.front().second << '\n';
        nine.pop();
    }
    while (!ten.empty()){
        cout << ten.front().first << sep << ten.front().second << '\n';
        ten.pop();
    }
    while (!eleven.empty()){
        cout << eleven.front().first << sep << eleven.front().second << '\n';
        eleven.pop();
    }

    return 0;
}