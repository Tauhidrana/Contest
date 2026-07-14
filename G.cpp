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
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(m,0);
        ll sum = 0;
         for (int i = 0; i < n; i++)
        {
            int x;
        cin>>x;
            sum+=x;
            a[x]++;
        }
    ll ans = sum;
        for (int j = 0; j < m-1; j++)
        {
            int w = a[m-1-j];
            sum+=n;
            sum-= 1LL*w*m;
            ans = min(ans,sum);
        }
        cout<<ans<<endl;
    }
    



    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/