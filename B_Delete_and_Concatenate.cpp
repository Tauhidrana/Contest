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
        int n;
        ll c;
        cin >> n >> c;

        vector<ll> a;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            sum += x;

            if (c - x > 0)
                a.push_back(c - x);
        }

        sort(a.rbegin(), a.rend());

        ll b = 0;
        int x = min((int)a.size(), n / 2);

        for (int i = 0; i < x; i++)
            b += a[i];

        ll ans = sum - 1LL * n * c + b;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/