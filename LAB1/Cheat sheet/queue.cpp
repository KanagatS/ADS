#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;

    cout << "Queue = 3, 1, 5, 2, 4" << '\n';

    q.push(3);
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(4);

    while (!q.empty())
    {
        cout << "Top element = " << q.front() << sep << q.back() << '\n';
        q.pop();
    }
    
    return 0;
}