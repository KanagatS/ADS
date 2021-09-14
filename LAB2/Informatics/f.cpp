#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

map<int, string> m;
bool used[100] = {0};
int max_key = 0;

void numerate(map<int, string> m){
    int index = 1;
    for (int i = 1; i <= max_key; i++)
    {
        while(index <= m.size()){
            if (m.find(i) != m.end()){
                m[index] = m.find(i)->second;
                index++;
                break;
            } else continue;
        }
    }
    
}

void replace_str(int x, string s){
    m[x] = s;
}

void delete_str(int x){
    m.erase(x);
    numerate(m);
}

void append_str(int x, string s){
    if (!used[x]){
        m[x] = s;
        used[x] = 1;
    } else{
        m[x + 1] = m.find(x)->second;
        m[x] = s;
        used[x + 1] = 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char ch;

    while(cin >> ch){
        if (ch == '+'){
            int x; cin >> x;
            string s; getline(cin ,s);
            append_str(x,s);
        }
        else if (ch == '-'){
            int x; cin >> x;
            delete_str(x);
        }
        else if (ch == '*'){
            int x; cin >> x;
            string s; getline(cin ,s);
            replace_str(x,s);
        }
    }

    for (auto &i : m){
        if (i.first > max_key) max_key = i.first;
        cout << i.second << '\n';
    }

    return 0;
}