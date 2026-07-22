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

const int N = 1000000;

int spf[N + 1];

void sieve()
{
    for (int i = 0; i <= N; i++)

        spf[i] = i;

    for (int i = 2; i * i <= N; i++)
    {
        if (spf[i] != i)

            continue;

        for (int j = i * i; j <= N; j += i)
        {
            if (spf[j] == j)

                spf[j] = i;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> cnt;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            while (x > 1)
            {
                int p = spf[x];
                int c = 0;

                while (x % p == 0)
                {
                    x /= p;
                    c++;
                }

                cnt[p] += c;
            }
        }

        bool flag = true;

        for (auto it : cnt)
        {
            if (it.second % n != 0)
            {
                flag = false;
                break;
            }
        }

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