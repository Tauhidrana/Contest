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
        int a, b, c;
        cin >> a >> b >> c;

        ll ans = a;

        ans += b / 3;
        b %= 3;

        if (b == 1)
        {
            if (c < 2)
            {
                cout << -1 << endl;
                continue;
            }
            c -= 2;
            ans++;
        }
        else if (b == 2)
        {
            if (c < 1)
            {
                cout << -1 << endl;
                continue;
            }
            c -= 1;
            ans++;
        }
        int cc = (c + 2) / 3;
        ans += cc;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/
