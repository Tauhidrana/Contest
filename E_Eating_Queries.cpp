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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)

            cin >> a[i];

        sort(a.rbegin(), a.rend());

        vector<ll> b(n);
        b[0] = a[0];

        for (int i = 1; i < n; i++)

            b[i] = b[i - 1] + a[i];

        while (q--)
        {
            long long x;
            cin >> x;

            auto it = lower_bound(b.begin(), b.end(), x);

            if (it == b.end())

                cout << -1 << endl;

            else

                cout << (it - b.begin()) + 1 << endl;
        }
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/