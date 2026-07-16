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
        int k;
        cin >> n >> k;

    vector<ll> a(k);

        for (int i = 0; i < k; i++)
        {
           ll x;
            cin >> x;
            a[i] = n - x;
        }

        sort(a.begin(), a.end());
        int ans = 0;
        ll ans1 = 0;

        for (long long x : a)
        {
            if (ans1 + x < n)
            {
                ans1 += x;
                ans++;
            }
            else

                break;
        }

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/