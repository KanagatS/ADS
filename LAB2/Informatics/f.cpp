#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

vector<pair<int, string>> v;

void replace_str(int x, string s){

}

void delete_str(int x){

}

void append_str(int x, string s){

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

    return 0;
}