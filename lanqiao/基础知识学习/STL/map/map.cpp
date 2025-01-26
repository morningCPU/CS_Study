#include <bits\stdc++.h>
using namespace std;
int main()
{
    map<int, string> data;
    data.insert({1, "Monday"});
    data.insert({2, "Tuesday"});
    data.insert({3, "Wednesday"});
    data.insert({4, "Thusday"});
    data.insert({5, "Friday"});
    data.insert({6, "Saturday"});
    data.insert({7, "Sunday"});
    cout << data[2] << '\n';
    for (auto i : data)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
    cout << data.find(2)->first << '\n';
    return 0;
}