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
    string s;
    cin >> s;

    vector<int> cnt(4);
    for (char c : s)
    {
        if (c != '+')

            cnt[c - '0']++;
    }

    bool flag = true;

    for (int i = 1; i <= 3; i++)
    {
        while (cnt[i]--)
        {
            if (flag == false)
                cout << "+";

            cout << i;
            flag = false;
        }
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/