#include <iostream>

using namespace std;

int shift_up(int *arr, int n, int index)
{
    while (index)
    {
        if (arr[index / 2 - 1 + index % 2] < arr[index])
        {
            swap(arr[index / 2 - 1 + index % 2], arr[index]);
            index = index / 2 - 1 + index % 2;
        }
        else
        {
            return index;
        }
    }
    return 0;
}

int sift_down(int *arr, int n, int index)
{
    while (2 * index + 2 < n)
    {
        if (arr[2 * index + 1] > arr[index] && arr[2 * index + 1] > arr[2 * index + 2])
        {
            swap(arr[index], arr[2 * index + 1]);
            index = 2 * index + 1;
            continue;
        }
        if (arr[2 * index + 2] > arr[index] && arr[2 * index + 1] < arr[2 * index + 2])
        {
            swap(arr[index], arr[2 * index + 2]);
            index = 2 * index + 2;
            continue;
        }
        if (arr[index] > arr[2 * index + 1] && arr[index] > arr[2 * index + 2])
        {
            return index;
        }
    }
    if (arr[index] < arr[n - 1] && 2 * index + 2 == n)
    {
        swap(arr[n - 1], arr[index]);
        index = n - 1;
    }
    return index;
}

int main()
{
    int n, m, add, k;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;
    int a[m];

    int z = m;

    for (; m > 0; --m)
    {
        cin >> k;
        cin >> add;
        arr[k - 1] = arr[k - 1] - add;
        a[z - m] = sift_down(arr, n, k - 1);
    }

    for (int i = 0; i < z; ++i)
    {
        cout << a[i] + 1 << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
