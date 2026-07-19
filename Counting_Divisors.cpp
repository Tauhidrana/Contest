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

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int ans = 1;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                int cnt = 0;
                while (x % i == 0)
                {
                    x /= i;
                    cnt++;
                }
                ans *= (cnt + 1);
            }
        }

        if (x > 1)
            ans *= 2;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/