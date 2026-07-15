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

    string t, p;
    cin >> t;
    cin >> p;

    int n = t.size(), m = p.size();

    vector<int> a(n);
    for (int i = 0; i < n; i++)

        cin >> a[i];

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);

        for (int i = 0; i < mid; i++)

            bad[a[i]] = true;

        int j = 0;
        bool found = false;

        for (int i = 0; i < n; i++)
        {

            if (j < m && t[i] == p[j] && !bad[i + 1])

                j++;

            if (j == m)
            {
                found = true;
                break;
            }
        }

        return found;
    };

    int l = 0;
    int r = n;
    int mid;
    int ans = 0;

    while (l <= r)
    {

        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else

            r = mid - 1;
    }

    cout << ans << endl;

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/