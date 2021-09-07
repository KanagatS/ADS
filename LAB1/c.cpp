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
    deque<int> d;
    int n;

    while (cin >> str)
    {
        if (str == "push_front")
        {
            cin >> n;
            d.push_front(n);
            cout << "ok" << endl;
        }

        else if (str == "push_back")
        {
            cin >> n;
            d.push_back(n);
            cout << "ok" << endl;
        }

        else if (str == "pop_front")
        {
            if (d.size() >= 1)
            {
                cout << d.front() << endl;
                d.pop_front();
            }
            else
                cout << "error" << endl;
        }

        else if (str == "pop_back")
        {
            if (d.size() >= 1)
            {
                cout << d.back() << endl;
                d.pop_back();
            }
            else
                cout << "error" << endl;
        }

        else if (str == "front")
        {
            if (d.size() >= 1)
                cout << d.front() << endl;
            else
                cout << "error" << endl;
        }

        else if (str == "back")
        {
            if (d.size() >= 1)
                cout << d.back() << endl;
            else
                cout << "error" << endl;
        }

        else if (str == "size")
        {
            cout << d.size() << endl;
        }

        else if (str == "clear")
        {
            while (!d.empty())
                d.pop_front();

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