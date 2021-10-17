#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    int ans;
    Node *prev;
    Node(int x)
    {
        value = x;
        prev = nullptr;
        ans = -1;
    }
};

struct Stack
{
private:
    Node *head = nullptr;
    int sz = 0;

public:
    int top()
    {
        return head->value;
    }

    void pop()
    {
        head = head->prev;
        sz--;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }

    int push(int x)
    {
        Node *node = new Node(x);

        node->prev = head;
        head = node;
        Node *elem = head;

        while (1)
        {
            if (elem->prev == nullptr) break;
            else elem = elem->prev;
            if (x >= elem->value) return elem->value;
        }

        return node->ans;
    }

} st;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        cout << st.push(x) << ' ';
    }
}