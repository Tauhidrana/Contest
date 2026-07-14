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
       int n;
       cin>>n;
       string s;
       cin>> s;
       bool flag = false;
       for (int i = 0; i+1 < n; i++)
       {
        if(s[i]!=s[i+1])
         {
            flag = true;
            break;
         }
       }
       if(flag==true)
        cout<<1<<endl;
        else
        cout<< n <<endl;
       
    }


    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/