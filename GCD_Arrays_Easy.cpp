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
const ll mod = 998244353;

ll binpow(ll b, ll e)
{
    b %= mod;

    if (b < 0)
        b += mod;

    ll res = 1;

    while (e)
    {
        if (e & 1)
            res = res * b % mod;

        b = b * b % mod;
        e >>= 1;
    }

    return res;
}

int mu[105];

void mobius(int n)
{
    vector<int> p;
    vector<char> vis(n + 1);

    mu[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            p.push_back(i);
            mu[i] = -1;
        }

        for (int pr : p)
        {
            if (1LL * i * pr > n)
                break;

            vis[i * pr] = 1;

            if (i % pr == 0)
            {
                mu[i * pr] = 0;
                break;
            }

            mu[i * pr] = -mu[i];
        }
    }
}

ll gcdll(ll a, ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    mobius(100);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        auto calc = [&](ll k)
        {
            ll s = 0;

            for (int d = 1; d <= m; d++)
            {
                if (!mu[d])
                    continue;

                s = (s + 1LL * mu[d] * binpow(m / d, k)) % mod;
            }

            return (s % mod + mod) % mod;
        };

        ll cn = calc(n);
        ll cn1 = calc(n - 1);

        vector<ll> pw(m + 1);

        for (int i = 0; i <= m; i++)
            pw[i] = binpow(i, n - 2);

        ll s = 0;

        for (int d = 1; d <= m; d++)
        {
            if (!mu[d])
                continue;

            ll vd = m / d;

            for (int e = 1; e <= m; e++)
            {
                if (!mu[e])
                    continue;

                ll ve = m / e;
                ll l = d / gcdll(d, e) * e;
                ll w = (l <= m ? pw[m / l] : 0);

                ll cur = 1LL * mu[d] * mu[e];
                cur = (cur % mod + mod) % mod;
                cur = cur * (vd % mod) % mod;
                cur = cur * (ve % mod) % mod;
                cur = cur * w % mod;

                s = (s + cur) % mod;
            }
        }

        ll sub = (2 * m % mod) * cn1 % mod;
        ll ans = ((cn - sub + s) % mod + mod) % mod;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/