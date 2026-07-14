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

        vector<int> a(n);

        for (int i = 0; i < n; i++)

            cin >> a[i];

        bool ok = true;

        for (int i = 0; i + 1 < n; i++)
        {
            if (a[i] == a[i + 1] && a[i] <= 2)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> b;
        b.reserve(2 * n);

        int pre = 0;

        for (int i = 0; i < n; i++)
        {
            int v = a[i];

            int nxt = (i + 1 < n && a[i + 1] <= 2 ? a[i + 1] : 0);

            if (v <= 2)
            {
                b.push_back(v);
                pre = v;
            }
            else if (v != pre)
            {
                b.push_back(v);
                pre = v;
            }
            else
            {
                if (v >= 4)
                {
                    b.push_back(1);
                    b.push_back(v - 1);
                    pre = v - 1;
                }
                else
                {
                    if (nxt == 2)
                    {
                        b.push_back(2);
                        b.push_back(1);
                        pre = 1;
                    }
                    else
                    {
                        b.push_back(1);
                        b.push_back(2);
                        pre = 2;
                    }
                }
            }
        }

        cout << b.size() << endl;

        for (int i = 0; i < (int)b.size(); i++)

            cout << b[i] << " \n"[i + 1 == (int)b.size()];
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/