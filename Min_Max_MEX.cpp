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

using ll = long long;
using namespace std;

bool ok(int x, vector<int> &a, int k)
{
    if (x == 0)
        return true;

    vector<int> b(x, 0);

    int t = 1;
    int have = 0;
    int seg = 0;

    for (int v : a)
    {
        if (v < x)
        {
            if (b[v] != t)
            {
                b[v] = t;
                have++;
            }
        }

        if (have == x)
        {
            seg++;

            if (seg >= k)
                return true;

            t++;
            have = 0;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int lo = 0, hi = n + 1;

        while (hi - lo > 1)
        {
            int mid = (lo + hi) / 2;

            if (ok(mid, a, k))
                lo = mid;
            else
                hi = mid;
        }

        cout << lo << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/