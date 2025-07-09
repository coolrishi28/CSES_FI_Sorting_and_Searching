#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len, i, ans = 0;
    cin >> len;
    int arr[len];
    map<int, int> mii;
    for (i = 0; i < len; i++)
    {
        cin >> arr[i];
        mii[arr[i]]++;
        if(mii[arr[i]] == 1)
        {
            ans++;
        }
    }
    cout << ans;
}
