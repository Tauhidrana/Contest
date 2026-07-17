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

    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);

    auto ok = [&](int mid)
    {
        vector<int> may(n);

        int has = m;

        for (int i = 0; i < n; i++)
        {
            auto [t, z, y] = a[i];

            int cycle = t * z + y;

            int total = (mid / cycle) * z;

            int rem = mid % cycle;

            total += min(z, rem / t);

            may[i] = total;
        }

        for (int i = 0; i < n; i++)
        {
            can[i] = min(has, may[i]);
            has -= can[i];
        }

        return has <= 0;
    };

    int l = 0, r = 1e8, ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else

            l = mid + 1;
    }

    ok(ans);

    cout << ans << endl;

    for (int x : can)

        cout << x << " ";

    cout << endl;

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/