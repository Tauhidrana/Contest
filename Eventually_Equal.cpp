#include <bits/stdc++.h>
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
        ll a, b, c;
        cin >> a >> b >> c;

        int ans;

        if (a == b)
            ans = 0;
        else if (gcd(a, c) == gcd(b, c))
            ans = 1;
        else if (gcd(a, c + 1) == gcd(b, c + 1))
            ans = 2;
        else
            ans = 3;

        cout << ans << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/