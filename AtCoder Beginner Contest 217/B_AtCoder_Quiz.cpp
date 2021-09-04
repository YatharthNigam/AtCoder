#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string arr[] = {"ABC", "ARC", "AGC", "AHC"};
    int check[4];
    for (int i = 0; i < 4; i++)
    {
        if (s1 == arr[i] or s2 == arr[i] or s3 == arr[i])
            check[i] = 1;
    }
    for (int i = 0; i < 4; i++)
    {
        if (check[i] != 1)
        {
            cout << arr[i] << endl;
            return;
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}
