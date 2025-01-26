#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    int ans = n & -n;
    cout << ans;
    return 0;
}