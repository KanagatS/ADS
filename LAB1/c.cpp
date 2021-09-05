#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    queue<int> q;
    int n;

    while (cin >> str)
    {
        if (str == "push")
        {
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }

        else if (str == "pop")
        {
            if (q.size() >= 1)
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
                cout << "error" << endl;
        }

        else if (str == "front")
        {
            if (q.size() >= 1)
                cout << q.front() << endl;
            else
                cout << "error" << endl;
        }

        else if (str == "size")
        {
            cout << q.size() << endl;
        }

        else if (str == "clear")
        {
            while (!q.empty())
                q.pop();

            cout << "ok" << endl;
        }

        else if (str == "exit")
        {
            cout << "bye" << endl;
            break;
        }

        else
        {
            cout << "incorrect input";
            break;
        }
    }

    return 0;
}