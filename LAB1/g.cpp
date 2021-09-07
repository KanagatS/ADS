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

    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
            s.push(str[i]-48);

        else if (str[i] == '+'){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(b+a);
        }

        else if (str[i] == '-'){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(b-a);
        }

        else if (str[i] == '*'){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(b*a);
        }
    }

    cout << s.top();

    return 0;
}