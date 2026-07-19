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
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)

            v[i] = {a[i], i};

        sort(v.begin(), v.end());

        vector<int> p(n);

        for (int i = 0; i < n; i++)

            p[v[i].second] = i;

        int mx = 0;

        for (int i = 0; i < n; i++)

            mx = max(mx, i ^ p[i]);

        if (mx == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 1;

        while ((ans << 1) <= mx)
            ans <<= 1;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/