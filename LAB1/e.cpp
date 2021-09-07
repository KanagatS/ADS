#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

deque<int> d1, d2;
int ans = 0;
string winner = "";

void make_action()
{
    if (d1.empty())
        winner = "second";
    else if (d2.empty())
        winner = "first";

    else if (d1.front() == 0 and d2.front() == 9)
    {
        d1.push_back(d1.front());
        d1.push_back(d2.front());
        d1.pop_front();
        d2.pop_front();
        ans++;
    }
    else if (d2.front() == 0 and d1.front() == 9)
    {
        d2.push_back(d1.front());
        d2.push_back(d2.front());
        d2.pop_front();
        d1.pop_front();
        ans++;
    }

    else if (d1.front() > d2.front())
    {
        d1.push_back(d1.front());
        d1.push_back(d2.front());
        d1.pop_front();
        d2.pop_front();
        ans++;
    }

    else if (d2.front() > d1.front())
    {
        d2.push_back(d1.front());
        d2.push_back(d2.front());
        d2.pop_front();
        d1.pop_front();
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
        d1.push_back(temp);
    }

    for (int i = 1; i <= 5; i++)
    {
        int temp;
        cin >> temp;
        d2.push_back(temp);
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