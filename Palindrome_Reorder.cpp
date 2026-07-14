#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <valarray>

using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26);

    for (char c : s)
        cnt[c - 'A']++;

    int odd = 0, id = -1;

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] & 1)
        {
            odd++;
            id = i;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string l, ans;

    for (int i = 0; i < 26; i++)
        l += string(cnt[i] / 2, char('A' + i));

    ans += l;

    if (id != -1)
        ans += char('A' + id);

    reverse(l.begin(), l.end());
    ans += l;

    cout << ans << endl;

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/