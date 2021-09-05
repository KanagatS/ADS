#include <bits/stdc++.h>

using namespace std;

#define sep ' '
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    // Доступ к элементам

    int first = numbers.front(); // 1
    int last = numbers.back();   // 5
    int second = numbers[1];     // 2
    int third = numbers.at(2);   // 3
    int fourth = numbers.at(3);  // 4

    cout << first << second << third << fourth << last << endl; // 1235



    // Перебор элементов через цикл

    for (int n : numbers)
        cout << n << "\t";
    cout << endl;

    for (int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << "\t";
    cout << endl;

    for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
        cout << *iter << "\t";
    cout << endl;

    return 0;
}