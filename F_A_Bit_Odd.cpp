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

        string s;
        cin >> s;

        int l = -1, r = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                r = i;
                break;
            }
        }

        bool flag;

        if (l == -1 || r == -1 || l > r)
        {
            flag = false;
        }
        else
        {
            bool even = true;

            int i = l;

            while (i <= r)
            {
                int j = i;

                while (j <= r && s[j] == s[i])
                    j++;

                int len = j - i;

                if (len % 2)
                {
                    even = false;
                    break;
                }

                i = j;
            }

            flag = !even;
        }

        if (flag == true)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/