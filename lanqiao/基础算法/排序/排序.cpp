#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<int, int> a;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        a[x]++;
    };
    int count = 1;
    ll sum = 0;
    for (auto i : a)
    {
        if (count == 1 || count == a.size())
            continue;
        sum += i.first * i.second;
    }
    cout << sum;
    return 0;
}