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
 cin>> t;
 while (t--)
 {
    int n;
    string s;
    cin>>n>>s;
    int mx = 0;
    int cur = 0;
    for(char c : s)
    {
        if(c=='#')
        cur++;
        else
        {
            mx=max(mx,cur);
            cur = 0;
     
        }
    }
    mx = max(mx,cur);
    if(mx==0) 
     cout<<0<<endl;
    else 
     cout<<(mx+1)/2<<endl;
 }
 






    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/