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
    deque<int> d1, d2;

    while (N--)
    {
        char ch; cin >> ch;

        if (ch == '+')
        {
            int x; cin >> x;
            d1.push_back(x);

            if (d1.size() > d2.size())
            {
                d2.push_back(d1.front());
                d1.pop_front();
            }
        }

        else if (ch == '*')
        {
            int x; cin >> x;
            d1.push_front(x);

            if (d1.size() > d2.size())
            {
                d2.push_back(d1.front());
                d1.pop_front();
            }
        }

        else if (ch == '-')
        {
            cout << d2.front() << '\n';
            d2.pop_front();

            if (d1.size() > d2.size())
            {
                d2.push_back(d1.front());
                d1.pop_front();
            }
        }
    }

    return 0;
}