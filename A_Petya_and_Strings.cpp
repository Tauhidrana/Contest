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
    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1)
        c = tolower(c);
    for (char &c : s2)
        c = tolower(c);

    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/