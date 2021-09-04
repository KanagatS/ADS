#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    stack<int> s;
    int n;

    while (cin >> str)
    {
        if (str == "push")
        {
            cin >> n;
            s.push(n);
            cout << "ok" << endl;
        }

        else if (str == "pop")
        {
            cout << s.top() << endl;
            s.pop();
        }

        else if (str == "back")
        {
            cout << s.top() << endl;
        }

        else if (str == "size")
        {
            cout << s.size() << endl;
        }

        else if (str == "clear")
        {
            while (!s.empty())
                s.pop();

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