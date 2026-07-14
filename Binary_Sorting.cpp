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

const int N = 200005;

int n;
int seg[4 * N];
int lazy[4 * N];

void build(int node, int l, int r)
{
    seg[node] = 0;
    lazy[node] = -1;

    if (l == r)
        return;

    int mid = (l + r) >> 1;

    build(node << 1, l, mid);
    build(node << 1 | 1, mid + 1, r);
}

void apply(int node, int len, int v)
{
    seg[node] = v ? len : 0;
    lazy[node] = v;
}

void push(int node, int l, int r)
{
    if (lazy[node] == -1)
        return;

    int mid = (l + r) >> 1;

    apply(node << 1, mid - l + 1, lazy[node]);
    apply(node << 1 | 1, r - mid, lazy[node]);

    lazy[node] = -1;
}

void update(int node, int l, int r, int ql, int qr, int v)
{
    if (ql <= l && r <= qr)
    {
        apply(node, r - l + 1, v);
        return;
    }

    push(node, l, r);

    int mid = (l + r) >> 1;

    if (ql <= mid)
        update(node << 1, l, mid, ql, qr, v);
    if (qr > mid)
        update(node << 1 | 1, mid + 1, r, ql, qr, v);

    seg[node] = seg[node << 1] + seg[node << 1 | 1];
}

int find_zero(int node, int l, int r)
{
    if (l == r)
        return l;

    push(node, l, r);

    int mid = (l + r) >> 1;

    int rz = (r - mid) - seg[node << 1 | 1];

    if (rz)
        return find_zero(node << 1 | 1, mid + 1, r);

    return find_zero(node << 1, l, mid);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> n >> q;

        build(1, 1, n);

        while (q--)
        {
            int tp;
            cin >> tp;

            if (tp == 0)
            {
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r, 0);
            }
            else if (tp == 1)
            {
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r, 1);
            }
            else
            {
                int s = seg[1];
                int z = n - s;

                if (z)
                    update(1, 1, n, 1, z, 0);
                if (s)
                    update(1, 1, n, z + 1, n, 1);
            }

            int s = seg[1];

            if (s == n)

                cout << 1 << endl;

            else
            {
                int z = find_zero(1, 1, n);
                cout << s - n + z + 1 << endl;
            }
        }
    }

    return 0;
}

/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/