#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> processGame(vector<vector<int>> events, int H)
{
    ll player1_hp = H;
    ll player2_hp = H;

    stable_sort(events.begin(), events.end(),
                [](const vector<int> &a, const vector<int> &b)
                {
                    return a[1] < b[1];
                });

    int n = (int)events.size();
    int i = 0;
    while (i < n)
    {
        int frame = events[i][1];
        int j = i;

        while (j < n && events[j][1] == frame)
        {
            int player = events[j][0];
            int attack_value = events[j][2];
            if (player == 1)
                player2_hp -= attack_value;
            else
                player1_hp -= attack_value;
            j++;
        }

        if (player1_hp <= 0 || player2_hp <= 0)
            break;
        i = j;
    }

    player1_hp = max(player1_hp, 0LL);
    player2_hp = max(player2_hp, 0LL);

    return {(int)player1_hp, (int)player2_hp};
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<vector<int>> events(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &events[i][0], &events[i][1], &events[i][2]);
    }
    int H;
    scanf("%d", &H);

    vector<int> result = processGame(events, H);
    printf("%d %d\n", result[0], result[1]);

    return 0;
}
/*
   Coded by : KAZI TAUHID RANA (কাজী তৌহিদ রানা)
     Codeforces Handle: tauhidrana.exe
   Codechef username: tauhid_rana
*/