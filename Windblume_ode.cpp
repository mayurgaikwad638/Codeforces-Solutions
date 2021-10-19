#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 20000;
    int prime[a] = {0};
    for (int i = 2; i <= a; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= a; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    // cout << prime[2] << prime[4];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int idx;
       // cout << prime[11];
        if (prime[sum] == 1)
        {
            // cout << "hello" ;
             cout << n << endl ;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                sum -= arr[i];
                if (prime[sum] == 1)
                {
                   // cout << prime[sum] ;
                    idx = i;
                    break ;
                }
                else
                {
                    sum += arr[i];
                }
            }
             cout << n-1 << endl ;
            for (int i = 1; i <= n; i++)
            {
                if (i == idx)
                {
                    continue;
                }
                else
                {
                    cout << i << " ";
                }
                
            }cout << endl;
        }
    }


return 0;
}