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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)

            cin >> a[i];

        ll need = 1;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < need)
            {
                flag = false;
                break;
            }
            ll ans = a[i] - need;
            a[i + 1] += ans;
            need++;
        }
        if (flag && a[n - 1] < need)
            flag = false;
        if (flag == true)
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