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

    vector<ll> freq(n, 0);
    freq[0] = 1;

    ll ans = 0;
    ll pref = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        pref += x;

        ll rem = ((pref % n) + n) % n;

        ans += freq[rem];
        freq[rem]++;
    }
    cout << ans << endl;
    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/