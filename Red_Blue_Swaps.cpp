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
const int mod = 998244353;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++)
            cin >> b[i];

        vector<int> c, d;
        vector<int> e, f;

        for (int i = 1; i <= n; i++)
        {
            if (b[i] == 0)
            {
                c.push_back(a[i]);
                e.push_back(i);
            }
            else
            {
                d.push_back(a[i]);
                f.push_back(i);
            }
        }

        int r = c.size();
        int l = d.size();

        vector<int> br(r + 1, 0);
        vector<int> rb(l + 1, 0);

        for (int i = 0; i < r; i++)
        {
            int mx = 0;

            for (int j = 0; j < l; j++)
            {
                if (c[i] < d[j] && f[j] < e[i])

                    mx = max(mx, j + 1);
            }

            br[i + 1] = mx;
        }

        for (int j = 0; j < l; j++)
        {
            int mx = 0;

            for (int i = 0; i < r; i++)
            {
                if (c[i] < d[j] && e[i] < f[j])

                    mx = max(mx, i + 1);
            }

            rb[j + 1] = mx;
        }

        vector<int> v(l + 1, 0);
        vector<int> v1(l + 1, 0);

        for (int i = 0; i <= r; i++)
        {
            fill(v1.begin(), v1.end(), 0);

            for (int j = 0; j <= l; j++)
            {
                if (i == 0 && j == 0)
                {
                    v1[j] = 1;
                    continue;
                }

                ll way = 0;

                if (i > 0 && j >= br[i])
                    way += v[j];

                if (j > 0 && i >= rb[j])
                    way += v1[j - 1];

                v1[j] = way % mod;
            }

            v.swap(v1);
        }

        cout << v[l] << endl;
    }
    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/