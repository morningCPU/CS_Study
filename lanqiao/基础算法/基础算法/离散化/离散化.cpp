#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << "ԭ����Ϊ��\n";
    for (auto i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << "��ɢ���������Ϊ��\n";
    for (auto i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
    int pos;
    int x;
    cin >> x;
    pos = lower_bound(a.begin(), a.end(), x) - a.begin();
    cout << pos;
}