#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    cout << "Stack = 3, 1, 5, 2, 4" << '\n';

    s.push(3);
    s.push(1);
    s.push(5);
    s.push(2);
    s.push(4);

    while (!s.empty())
    {
        cout << "Top element = " << s.top() << '\n';
        //s.pop();
    }

    return 0;
}