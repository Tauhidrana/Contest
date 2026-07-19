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

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, m;
        cin >> n >> k >> m;

        if (k > m)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<ll> ans;
        ans.reserve(n);

        if (k == 1)
        {
            for (int i = 0; i < n; i++)

                ans.push_back(m);
        }
        else
        {
            ll prev = 0;

            for (int i = 1; i <= n; i++)
            {
                ll cur = i % k;

                ll diff = (cur - prev + m) % m;

                if (diff == 0)
                    diff = m;

                ans.push_back(diff);
                prev = cur;
            }
        }

        for (int i = 0; i < (int)ans.size(); i++)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/