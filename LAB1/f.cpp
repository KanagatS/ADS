#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

bool check(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);

        else if (st.empty())
            return false;

        else if (s[i] == '}' && st.top() != '{')
            return false;

        else if (s[i] == ']' && st.top() != '[')
            return false;

        else if (s[i] == ')' && st.top() != '(')
            return false;

        else
            st.pop();
    }

    return (st.empty());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    if (check(str))
    {
        cout << "yes";
        return 0;
    }

    cout << "no";
    return 0;
}