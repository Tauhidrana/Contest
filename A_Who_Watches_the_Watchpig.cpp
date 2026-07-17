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
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        if (2 * k > n)
        {
            cout << -1 << endl;
            continue;
        }

        int ans = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] != 'R')
                ans++;
        }

        for (int i = n - k; i < n; i++)
        {
            if (s[i] != 'L')
                ans++;
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