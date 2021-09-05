#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

queue<int> q1, q2;
int ans = 0;
string winner = "";

void make_action()
{
    if (q1.size() == 0)
        winner = "second";
    else if (q2.size() == 0)
        winner = "first";

    if (q1.front() == 0 and q2.front() == 9)
    {
        q1.push(q2.front());
        q2.pop();
        ans++;
    }
    else if (q2.front() == 0 and q1.front() == 9)
    {
        q2.push(q1.front());
        q1.pop();
        ans++;
    }

    if (q1.front() > q2.front())
    {
        q1.push(q2.front());
        q2.pop();
        ans++;
    }
    else if (q2.front() > q1.front())
    {
        q2.push(q1.front());
        q1.pop();
        ans++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 5; i++)
    {
        int temp;
        cin >> temp;
        q1.push(temp);
    }

    for (int i = 1; i <= 5; i++)
    {
        int temp;
        cin >> temp;
        q2.push(temp);
    }

    while (winner == "")
    {
        if (ans >= 1000000)
        {
            cout << "botva";
            return 0;
        }

        make_action();
    }

    cout << winner << sep << ans;

    return 0;
}