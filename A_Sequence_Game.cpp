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
        cin >> n;

        ll mn = 1e18, mx = -1e18;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        ll x;
        cin >> x;

        if (x >= mn && x <= mx)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/