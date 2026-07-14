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

        vector<int> a(n);
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x += a[i];
        }

        sort(a.begin(), a.end());

        ll need = 2 * k - x;
        ll ans = 0;

        int l = 0, r = n - 1;

        while (l < r)
        {
            if (1LL * a[l] + a[r] > need)
            {
                ans += r - l;
                r--;
            }
            else
                l++;
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