#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        cout<<arr[arr[i]-1]<<" ";
}

int32_t main()
{
    solve();
    return 0;
}
