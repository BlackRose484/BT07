#include <bits/stdc++.h>
using namespace std;

int count_even(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            cnt++;
        }
    }
    return n - cnt;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << count_even(a, n);
    system("pause");
}