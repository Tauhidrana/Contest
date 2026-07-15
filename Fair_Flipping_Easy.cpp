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
        cin >> n >> k;

        string s;
        cin >> s;

        int z = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')

                z++;
        }

        int o = n - z;

        if (z < k || o < k)
        {
            cout << s << endl;
            continue;
        }

        if (z == k && o == k)
        {
            string x = s;

            for (int i = 0; i < n; i++)
            {
                if (x[i] == '0')

                    x[i] = '1';

                else

                    x[i] = '0';
            }

            cout << min(s, x) << endl;
            continue;
        }

        string ans = "";

        for (int i = 0; i < z; i++)

            ans += '0';

        for (int i = 0; i < o; i++)

            ans += '1';

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/