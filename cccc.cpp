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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        bool flag = 1;
        for (int x : a)
            flag &= (x == 0);

        if (flag == 1)
        {
            cout << -1 << endl;
            continue;
        }

        bool flag1 = 1;
        for (int x : b)
            flag1 &= (x == 1);

        if (flag1)
        {
            cout << -1 << endl;
            continue;
        }

        int xr = 0;

        for (int i = 0; i < n; i++)
            xr ^= (a[i] & (b[i] ^ 1));

        if (xr == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/