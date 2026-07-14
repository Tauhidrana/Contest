#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate_shape(int n, string shape)
{
    vector<vector<int>> grid(n, vector<int>(n, 0));

    if (shape == "checkerboard")
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                grid[i][j] = (i + j) % 2;
            }
        }
    }
    else if (shape == "diamond")
    {
        int mid = n / 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(i - mid) + abs(j - mid) <= mid)
                    grid[i][j] = 1;
            }
        }
    }

    return grid;
}
/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/