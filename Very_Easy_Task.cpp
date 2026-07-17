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

        vector<int> need(10, 0);
        string s = "01032025";

        for (char c : s)
            need[c - '0']++;

        vector<int> have(10, 0);

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            have[x]++;

            bool ok = true;

            for (int d = 0; d < 10; d++)
            {
                if (have[d] < need[d])
                {
                    ok = false;
                    break;
                }
            }

            if (ok && ans == 0)
                ans = i;
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