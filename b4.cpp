#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
        {
            cout << mid + 1 << endl;
            break;
        }
        else if (a[mid] > k)
        {
            r = mid - 1;
        }
        else if (a[mid] < k)
        {
            l = mid + 1;
        }
    }
    if (l >= r)
        cout << "No find";
    system("pause");
}