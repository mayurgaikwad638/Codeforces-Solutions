#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        unordered_map<int, int> mp;

        int j = 1;

        for (int i = 0; i < n; i++)
        {
            while(j < arr2[i])
            {
                mp[j] = i;
                j += 2;
            }
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {

            ans = min(ans, i + mp[arr1[i]]);
        }

        cout << ans << endl;
    }
        return 0;
}