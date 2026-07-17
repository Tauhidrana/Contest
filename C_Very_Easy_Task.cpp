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

        vector<int> cnt(10, 0);
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;

            if (ans == 0 &&
                cnt[0] >= 3 &&
                cnt[1] >= 1 &&
                cnt[2] >= 2 &&
                cnt[3] >= 1 &&
                cnt[5] >= 1)
            {
                ans = i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/