#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len1, len2, k, i = 0, j = 0, ans = 0;
    cin >> len1 >> len2 >> k;
    int arr1[len1], arr2[len2];
    for(i = 0; i < len1; i++)
    {
        cin >> arr1[i];
    }
    for(i = 0; i < len2; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + len1);
    sort(arr2, arr2 + len2);
    i = 0;
    while(i < len1 and j < len2)
    {
        int left = arr1[i] - k, right = arr1[i] + k;
        if(arr2[j] < left)
        {
            j++;
        }
        else if(arr2[j] > right)
        {
            i++;
        }
        else
        {
            i++;
            j++;
            ans++;
        }
    }
    cout << ans;
}
