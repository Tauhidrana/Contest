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

    const int mx = 100000;

    vector<ll> a(mx + 1, 0);

    for (int i = 1; i <= mx; i++)
    {
        a[i] = a[i - 1];

        int x = i;
        int rev = 0;

        while (x)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        if (rev == i)
            a[i] += i;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << a[r] - a[l - 1] << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/